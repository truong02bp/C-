#include<iostream>
#include<algorithm>

using namespace std;

int n,m,a[1000][1000],f[1005][1005];

void result()
{
    int ans = 0;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
        {
            if (a[i][j]==1 && a[i-1][j-1]==1 && a[i-1][j]==1 && a[i][j-1]==1)
                f[i][j] = min(min(f[i-1][j-1],f[i][j-1]),f[i-1][j])+1;
            ans = max(ans,f[i][j]);
        }
    cout << ans << endl;
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
            {
                cin >> a[i][j];
                if (a[i][j]==1)
                    f[i][j]=1;
                else 
                    f[i][j]=0;
            }
        result();
    }
    return 0;
}