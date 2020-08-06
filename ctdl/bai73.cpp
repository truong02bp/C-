#include<bits/stdc++.h>
using namespace std;

int m,n,p[1005],q[1005];

void solve()
{
    int c[2005]={0};
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            c[i+j]+=p[i]*q[j];
    for (int i=0;i<m+n-1;i++)
        cout << c[i] << " ";
    cout << endl;            
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> m >> n;
        for (int i=0;i<m;i++)
            cin >> p[i];
        for (int j=0;j<n;j++)
            cin >> q[j];    
        solve();     
    }
    return 0;
}