#include<iostream>
using namespace std;

typedef long long ll;
#define modulo 1000000007;
int n;
ll k;

ll result(int n , ll k)
{
    if (k==0)
        return 1;
    ll temp = result(n,k/2);
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
        cin >> n >> k;
        cout << result(n,k) << endl;
    }
    return 0;
}