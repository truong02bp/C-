#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<vector<ll> > maTran;
#define modulo 1000000007;

int n;

maTran tich(maTran a, maTran b)
{
    maTran rs;
    for (int i=0;i<=1;i++)
    {
        vector<ll> x;
        for (int j=0;j<=1;j++)
        {
            ll t=0;
            for (int k=0;k<=1;k++)
                t = (t + a[i][k]*b[k][j])%modulo;
            x.push_back(t);    
        }
        rs.push_back(x);
    }
    return rs;
}
maTran solve(maTran a , ll n)
{
    if (n==1)
        return a;
    maTran t = solve(a,n/2);
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
        maTran a,x;
        cin >> n;
        for (int i=0;i<=1;i++)
        {
            vector<ll> temp;
            for (int j=0;j<=1;j++)
                temp.push_back(0);
            a.push_back(temp);    
        }
        a[0][0]=0;
        a[0][1]=1;
        a[1][0]=1;
        a[1][1]=1;
        x = solve(a,n);
        cout << x[0][1] << endl;
    }
    return 0;
}