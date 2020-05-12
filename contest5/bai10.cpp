#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int n,m,a[1005][1005],f[1005][1005];

void result()
{
    memset(f,0,sizeof(f));
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
        {
            if (i==1 && j!=1)
                f[i][j] = f[i][j-1] + a[i][j];
            else 
                if (i!=1 && j==1)
                    f[i][j] = f[i-1][j] +a[i][j];
                else 
                    f[i][j] = min(f[i-1][j],min(f[i-1][j-1],f[i][j-1]))+a[i][j];
        }
    cout << f[n][m] << endl;
}   

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i=1;i<=n;i++)
            for (int j=1;j<=m;j++)
                cin >> a[i][j];
        result();
    }
}