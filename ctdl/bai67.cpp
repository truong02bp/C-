#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n,l,r;

int search(ll k , ll n)
{
    double logn = log(n);
    double log2 = log(2);
    ll log2n = log(n)/log(2);
    ll index = pow(2,log2n);
    if (k == index)
        return n%2;
    if (k%2==1)
        return 1;        
    if (k < index)
        return search(k,n/2);
    return search(k-index,n/2);        
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
    while(t--)
    {
        cin >> n >> l >> r;
        result();
    }
    return 0;
}