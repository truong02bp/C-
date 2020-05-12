#include<iostream>
using namespace std;

typedef long long ll;
#define modulo 1000000007;
ll n;

ll dao(ll a)
{
    ll rs = 0;
    while (a>0)
    {
        rs = rs*10 + a%10;
        a/=10;
    }
    return rs;
}

ll result(ll k)
{
    if (k==0)
        return 1;
    ll temp = result(k/2);
    temp%=modulo;
    ll rs = (temp*temp)%modulo;
    if (k%2==0)
        return rs;
    else 
        return (rs*n)%modulo;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << result(dao(n)) << endl;
    }
    return 0;
}