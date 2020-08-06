#include<bits/stdc++.h>
using namespace std;

struct cv
{
    int dau;
    int cuoi;
};

int n,rs;
cv a[1005];

bool cmp(cv a , cv b)
{
    return a.cuoi < b.cuoi;
}

void solve()
{
    rs = 1;
    int time = a[0].cuoi;
    for (int i=1;i<n;i++)
        if (a[i].dau >= time)
        {
            rs++;
            time = a[i].cuoi;
        }
    cout << rs << endl;    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i].dau;
        for (int i=0;i<n;i++)
            cin >> a[i].cuoi;
        sort(a,a+n,cmp);   
        solve();
    }
    return 0;
}