#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;
typedef vector< vector<ll> > maTran;
#define modulo 1000000007;

ll n;
maTran x;

maTran tich (maTran a , maTran b)
{
    maTran rs;
    for (int i=0;i<=1;i++)
    {
        vector<ll> temp;
        for (int j=0;j<=1;j++)
        {
            int t = 0;
            for (int k=0;k<=1;k++)
                t = (t + a[i][k]*b[k][j])%modulo;
            temp.push_back(t);
        }
        rs.push_back(temp);
    }
    return rs;
}

maTran rs(maTran a , ll n)
{
    if (n==1)
        return x;
    maTran temp = rs (a,n/2);
    if (n%2==0)
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
        x.clear();
        cin >> n;
        for (int i=0;i<=1;i++)
        {
            vector<ll> temp;
            for (int j=0;j<=1;j++)
                temp.push_back(0);
            x.push_back(temp);
        }
        x[0][0]=0;
        x[0][1]=1;
        x[1][0]=1;
        x[1][1]=1;
        maTran a = rs(x,n);
        cout << a[0][1] << endl;
    }
    return 0;
}