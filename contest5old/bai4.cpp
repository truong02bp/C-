#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int n,k,a[1005],f[1005][1005];

void result()
{
    int rs = 0;
    memset(f,0,sizeof(f));
    for (int i=1;i<=n;i++)
        a[i] = a[i]%k;
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