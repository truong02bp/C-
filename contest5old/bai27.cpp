#include<iostream>
#include<string.h>
using namespace std;


int  n,v,a[1005],c[1005],rs[1005][1005];

void result()
{
    memset(rs,0,sizeof(rs));
    for (int i=1;i<=n;i++)
        for (int j=1;j<=v;j++)
            if (j>=a[i] && rs[i-1][j-a[i]]+c[i] > rs[i-1][j])
                rs[i][j] = rs[i-1][j-a[i]]+c[i];
            else 
                rs[i][j] = rs[i-1][j];
    cout << rs[n][v] << endl;
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
        for (int i=1;i<=n;i++)
            cin >> c[i];
        result();
    }
    return 0;
}