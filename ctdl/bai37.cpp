#include<iostream>
using namespace std;

int n,m,u,v,a[25][25],rs,cnt;

void Try(int u)
{
    for (int i=0;i<n;i++)
        if (a[u][i]==1)
        {
            a[u][i]=0;
            a[i][u]=0;
            cnt++;
            rs = max(rs,cnt);
            Try(i);
            a[u][i]=1;
            a[i][u]=1;
            cnt--;
        }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        rs=0;
        cin >> n >> m;
        for (int i=0;i<n;i++)
            for (int j=0;j<n;j++)
                a[i][j]=0;
        for (int i=0;i<m;i++)
        {
            cin >> u >> v;
            a[u][v]=1;
            a[v][u]=1;
        }
        for (int i=0;i<n;i++)
        {
            cnt=0;
            Try(i);
        }
        cout << rs << endl;
    }
    return 0;
}