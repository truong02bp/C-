#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector< vector<ll> > maTran;
#define modulo 1000000007;

int n;
ll k;
maTran tich(maTran a , maTran b)
{
    maTran rs;
    for (int i=0;i<n;i++)
    {
        vector<ll> x;
        for (int j=0;j<n;j++)
        {
            ll t=0;
            for (int k=0;k<n;k++)
                t = (t + a[i][k]* b[k][j])%modulo;
            x.push_back(t);    
        }
        rs.push_back(x);
    }
    return rs;  
}
maTran result(maTran a , ll n)
{
    if (n==1)
        return a;
    maTran t = result(a,n/2);    
    if (n%2==0)
        return tich(t,t);
    else 
        return tich(a,tich(t,t));    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        maTran a;
        cin >> n >> k;
        for (int i=0;i<n;i++)
        {
            vector<ll> x;
            for (int j=0;j<n;j++)
            {
                ll temp;
                cin >> temp;
                x.push_back(temp);
            }
            a.push_back(x);
        }
        a = result(a,k);
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
                cout << a[i][j] <<" ";
            cout << endl;    
        }
    }
    return 0;
}