#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;

vector<ll> a,b;
ll n;

ll find(ll l , ll r)
{
    if (l > r)
        return -1;
    ll mid = (l+r)/2;
    if (a[mid-1]==b[mid-1] && a[mid+1]==b[mid])
        return mid+1;
    ll t = find(l,mid-1);
    if (t==-1)
        find(mid+1,r);
}

void result()
{
    ll t = find(0,n-1);
    if (t==-1)
    {
        if (a[0]!=b[0])
            t = 1;
        if (a[n-2]==b[n-2])
            t = n;
    }
    cout << t << endl;  
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
        b.clear();
        cin >> n;
        for (ll i=0;i<n;i++)
        {
            ll temp;
            cin >> temp;
            a.push_back(temp);
        }    
        for (ll i=0;i<n-1;i++)
        {
            ll temp;
            cin >> temp;
            b.push_back(temp);
        } 
        result();
    }
    return 0;
}