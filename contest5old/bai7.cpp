#include<iostream>
using namespace std;

int n,k;
typedef long long ll;
#define modulo 1000000007;

void result()
{
    ll f[100005],sum=0;
    f[0]=1;
    for (int i=1;i<=k;i++)
    {
        sum = (sum + f[i-1])%modulo;
        f[i] = sum;
    }
    if (n <= k)
        cout << f[n] << endl;
    else 
    {
        for (int i=k+1;i<=n;i++)
        {
            int temp = (2*f[i-1])%modulo;
    temp-=f[i-k-1];
            temp+=modulo;
            f[i] = temp%modulo;
        }
         cout << f[n] << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        result();
    }
    return 0;
}