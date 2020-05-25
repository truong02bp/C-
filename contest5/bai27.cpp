#include<iostream>
#include<string.h>
using namespace std;

int n,v,a[1005],c[1005],f[1005][1005];

void result()
{
    memset(f,0,sizeof(f));
    for (int i=1;i<=n;i++)
        for (int j=1;j<=v;j++)
            if (j >= a[i] && f[i-1][j-a[i]]+c[i] > f[i-1][j])
                f[i][j] = f[i-1][j-a[i]]+c[i];
            else 
                f[i][j] = f[i-1][j];
    cout << f[n][v] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> v;
        for (int i=1;i<=n;i++)
            cin >> a[i];
        for (int j=1;j<=n;j++)
            cin >> c[j];
        result();
    }
    return 0;
}