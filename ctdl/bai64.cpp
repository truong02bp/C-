#include<iostream>
using namespace std;

#define modulo 123456789;
typedef long long ll;

ll n;

ll result(ll n)
{
    if (n==0)
        return 1;
    ll t = result(n/2);
    t%=modulo;
    t = (t*t)%modulo;
    if (n%2==0)
        return t;
    else 
        return (2*t)%modulo;        
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << result(n-1) << endl;
    }
    return 0;
}