#include<iostream>
#include<algorithm>
using namespace std;

int n,m;
typedef long long ll;
void result()
{
    ll f[100][100];
    f[0][1]=0;
    f[1][0]=0;
    f[1][1]=0;
    
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
        {
            if (i!=1 && j!=1)
                f[i][j]=99999;
            f[i][j] = min(min(f[i-1][j],f[i][j-1]),min(f[1][j],f[i][1]))+1;
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
        result();
    }
    return 0;
}