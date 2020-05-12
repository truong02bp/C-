#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int n,k,a[1005],f[1005][100];

void result()
{
    for (int i=1;i<=n;i++)
        a[i] = a[i]%k;
    f[0][0]=0;
    for (int i=1;i<k;i++)
        f[0][i]=-99999;
    for (int i=1;i<=n;i++)
        for (int j=0;j<k;j++)
        {
            f[i][j] = max(f[i-1][j],f[i-1][(j-a[i]+k)%k]+1);
        }
    cout << f[n][0] << endl;
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