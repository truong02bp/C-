#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
void solve()
{
    vector<int> a;
    while (n>0)
    {
        a.push_back(n%10);
        n/=10;
    }
    ll sum=0;
    for (int i=a.size()-1;i>=0;i--)
    {
        ll t = a[i];
        sum+=t;
        for (int j=i-1;j>=0;j--)
        {
            t = t*10 + a[j];
            sum+=t;
        }
    }
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        solve();   
    }
    return 0;
}