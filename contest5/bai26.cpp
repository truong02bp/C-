#include<iostream>
#include<string.h>
using namespace std;

int c,n,f[105][30000],w[105];

void result()
{
    memset(f,0,sizeof(f));
    for (int i=1;i<=n;i++)
        for (int j=1;j<=c;j++)
            if (j>=w[i] && f[i-1][j-w[i]]+w[i] > f[i-1][j])
                f[i][j] = f[i-1][j-w[i]]+w[i];
            else 
                f[i][j] = f[i-1][j];
    cout << f[n][c] << endl;
}

int main()
{
    cin >> c >> n;
    for (int i=1;i<=n;i++)
        cin >> w[i];
    result();
    return 0;
}