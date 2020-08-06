#include<iostream>
#include<vector>
using namespace std;

int n,p,s,a[100];
vector<bool> check(205,true);
vector<int> snt;
vector< vector<int> > rs;
void sangNto()
{
    check[0]=false;
    check[1]=false;
    for (int i=2;i<=200;i++)
        if (check[i]==true)
            for (int j=i*i;j<=200;j+=i)
                check[j]=false;
}
void accept(int k)
{
    vector<int> temp;
    for (int i=1;i<=k;i++)
        temp.push_back(a[i]);
    rs.push_back(temp);
}
void Try(int k)
{
    if (s < 0)
        return ;
    for (int i=0;i<snt.size();i++)
        if (snt[i] > a[k-1])
        {
            s-=snt[i];
            a[k] = snt[i];
            if (s == 0 && k == n)
                accept(k);
            else 
                Try(k+1); 
            s+=snt[i];       
        }
}

int main()
{
    int t;
    cin >> t;
    sangNto();
    while (t--)
    {
        snt.clear();
        rs.clear();
        cin >> n >> p >> s;
        for (int i=p+1;i<=s;i++)
            if (check[i]==true)
                snt.push_back(i);
        a[0]=0;
        Try(1);        
        cout << rs.size() << endl;
        for (int i=0;i<rs.size();i++)
        {
            for (int j=0;j<rs[i].size();j++)
                cout << rs[i][j] <<" ";
            cout << endl;
        }    
    }
    return 0;
}