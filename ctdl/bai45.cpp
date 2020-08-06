#include<bits/stdc++.h>
using namespace std;

int n,k,a[105];

void solve()
{
    int minn;
    minn = min(k,n-k);
    sort(a,a+n);
    int s1=0,s2=0;
    for (int i=0;i<minn;i++)
        s1+=a[i];
    for (int j=minn;j<n;j++)
        s2+=a[j];
    cout << s2 - s1 << endl;        
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for (int i=0;i<n;i++)
            cin >> a[i];
        solve();    
    }
    return 0;
}