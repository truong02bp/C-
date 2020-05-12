#include<iostream>
#include<vector>
using namespace std;

vector<int> snt;
vector<bool> check(300,true),b(100,false);
vector< vector<int> > rs;
int n,p,s,sum,a[20];

void sangNto()
{
    check[0]=false;
    check[1]=false;
    for (int i=2;i<=200;i++)
        if (check[i]==true)
        {
            for (int j=i*i;j<=200;j+=i)
                check[j]=false;
        }
}
void accept()
{
    vector<int> temp;
    for (int i=1;i<=n;i++)
        temp.push_back(a[i]);
    rs.push_back(temp);
}
void Try(int i)
{
    for (int j=0;j<snt.size();j++)
        if (b[j]==false)
        {
            sum+=snt[j];
            b[j] = true;
            a[i] = snt[j];
            if (sum <= s && a[i] > a[i-1])
            {
                if (i==n)
                    {
                        if (sum==s)
                            accept();
                    }
                else
                {
                    Try(i+1);
                }
            }
            sum-=snt[j];
            b[j] = false;
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
        b.assign(100,false);
        sum=0;
        cin >> n >> p >> s;
        for (int i=p;i<=200;i++)
            if (check[i]==true)
                snt.push_back(i);
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
