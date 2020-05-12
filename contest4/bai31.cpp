#include<iostream>
#include<vector>
using namespace std; 

typedef long long ll;
typedef vector< vector<ll> > maTran;
typedef vector<ll> vt;

#define modulo 1000000007;

int n,k;
maTran a;

maTran tich(maTran a , maTran b)
{
    maTran rs;
    for (int i=0;i<n;i++)
    {
        vt temp;
        for (int j=0;j<n;j++)
        {
            ll t=0;
            for (int k=0;k<n;k++)
                t = (t + a[i][k]*b[k][j])%modulo;
            temp.push_back(t);
        }
        rs.push_back(temp);
    }
    return rs;
}

maTran result(ll k)
{
    if (k==1)
        return a;
    maTran temp = result(k/2);
    if (k%2==0)
        return tich(temp,temp);
    else 
        return tich(tich(a,temp),temp);
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
        cin >> n >> k;
        for (int i=0;i<n;i++)
        {
            vt temp;
            for (int j=0;j<n;j++)
            {
                ll t;
                cin >> t;
                temp.push_back(t);
            }
            a.push_back(temp);
        }
        maTran rs = result(k);
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
                cout << rs[i][j] <<" ";
            cout << endl;
        }
    }
    return 0;
}