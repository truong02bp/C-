#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define modulo 1000000007;
priority_queue<ll , vector<ll> , greater<ll> > a;
int n;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
        {
            ll temp;
            cin >> temp;
            a.push(temp);
        }
        ll sum=0;
        while (a.size() > 1)
        {
            ll x = a.top();
            a.pop();
            ll y = a.top();
            a.pop();
            ll temp = (x+y)%modulo;
            sum+=temp;
            sum%=modulo;
            a.push(temp);
        }
        a.pop();
        cout << sum << endl;
    }
    return 0;
}