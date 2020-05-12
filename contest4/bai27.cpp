#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

typedef long long ll;

ll n,l,r;

ll search(ll k , ll n)
{
    double logn = log(n);
    double log2 = log(2);
    ll  log2n = logn/log2;
    ll mid = pow(2,log2n);
    if (k==mid)
        return n%2;
    if (k%2==1)
        return 1;
    if (k > mid)
        return search(k-mid,n/2);
    return search(k,n/2);
}
void result()
{
    ll rs=0;
    for (ll i=l;i<=r;i++)
        rs+=search(i,n);
    cout << rs << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> l >> r;
        result(); 
    }
    return 0;
}