#include<bits/stdc++.h>
using namespace std;

int n,a[100005];

void solve()
{
    sort(a,a+n);
    int rs=0,i=0,j=n/2;
    while (j<n)
    {
        if (a[j] >= 2*a[i])
        {
            i++;
            rs++;
        }
        j++;
    }
    cout << n-rs << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i];
        solve();    
    }
    return 0;
}