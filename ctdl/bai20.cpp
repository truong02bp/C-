#include<iostream>
#include<vector>
using namespace std;

int a[15],b[15],n;
vector<vector<int> > rs;

void Try(int k)
{
    if (k <= 0)
        return ;
    vector<int> s;   
    for(int i=0;i<k-1;i++)
    {
        s.push_back(a[i]);
        a[i] = a[i]+a[i+1];
    }
    s.push_back(a[k-1]);
    rs.push_back(s);
    Try(k-1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        rs.clear();
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i];
        Try(n);
        for (int i=rs.size()-1;i>=0;i--)
        {
            cout << "[";    
            for (int j=0;j<rs[i].size()-1;j++)
            cout << rs[i][j] <<" ";
            cout << rs[i][rs[i].size()-1] << "]" << endl;
        }
    }
    return 0;
}
