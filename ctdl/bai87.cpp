#include<bits/stdc++.h>
using namespace std;

#define modulo 1000000007;
typedef long long ll;

int n,k;
ll fibo[100005];
void solve()
{
    ll sum=2;
    fibo[0]=1;
    fibo[1]=1;
    for (int i=2;i<=k;i++)
    {
        fibo[i]=sum;
        sum+=fibo[i];
        sum%=modulo;
    }
    for (int i=k+1;i<=n;i++)
    {
        ll temp = (2*fibo[i-1])%modulo
        fibo[i] = temp - fibo[i-k-1];
        fibo[i]+=modulo;
        fibo[i]%=modulo;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        solve();
        cout << fibo[n] << endl;
    }
    return 0;
}