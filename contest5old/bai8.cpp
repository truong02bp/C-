#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int n,m,a[600][600],f[600][600];

void result()
{
    int rs = 0;
    for (int i=1;i<n;i++)
        for (int j=1;j<m;j++)
        {
            if (a[i][j]==a[i-1][j-1] && a[i][j]==a[i-1][j] && a[i][j]==a[i][j-1] && a[i][j]==1)
                f[i][j] = min(min(f[i-1][j-1],f[i-1][j]),f[i][j-1])+1;
            rs = max(rs,f[i][j]);
        }
    cout << rs << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
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