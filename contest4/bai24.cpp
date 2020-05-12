#include<iostream>
using namespace std;

typedef long long ll;
#define modulo 123456789;

ll n;

ll result(ll n)
{
    if (n==0)
        return 1;
    ll temp = result(n/2);
    temp%=modulo;
    ll result = (temp * temp)%modulo;;
    if (n%2==0)
        return result;
    else 
        return (2*result)%modulo;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << result(n-1) << endl;
    }
    return 0;
}