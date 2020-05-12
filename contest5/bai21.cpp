#include<iostream>
#include<string.h>
using namespace std;

#define modulo 1000000007;
int n,k,a[1005];

void result()
{
    int f[10005];
    memset(f,0,sizeof(f));
    f[0]=1;
    for (int i=1;i<=k;i++)
        for (int j=1;j<=n;j++)
            if (a[j] <= i)
            {
                f[i]+=f[i-a[j]];
                f[i]%=modulo;
            }
    cout << f[k] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i=1;i<=n;i++)
            cin >> a[i];
        result();
    }
    return 0;
}