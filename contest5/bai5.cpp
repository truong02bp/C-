#include<iostream>
using namespace std;

#define modulo 1000000007;
typedef long long ll;

int n,k,f[1005][1005];

void result()
{
    for (int i=1;i<=1000;i++)
        for (int j=0;j<=i;j++)
        {
            if (j==0 || j==i)
                f[i][j]=1;
            else 
                f[i][j] = (f[i-1][j-1]+f[i-1][j])%modulo;
        }
}

int main()
{
    int t;
    cin >> t;
    result();
    while (t--)
    {
        cin >> n >> k;
        cout << f[n][k] << endl;
    }
    return 0;
}