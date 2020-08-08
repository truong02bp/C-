#include<bits/stdc++.h>
using namespace std;

int m,n,u,v,c,G[1005][1005];

void floy()
{
    for (int k=1;k<=n;k++)
        for (int i=1;i<=n;i++)
            for (int j=1;j<=n;j++)
                if (G[i][j] > G[i][k] + G[k][j])
                    G[i][j] = G[i][k]+G[k][j];                
}

int main()
{
    cin >> n >> m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            if (i==j)
                G[i][j]=0;
            else 
                G[i][j]=1e7;
    for (int i=0;i<m;i++)
    {
        cin >> u >> v >> c;
        G[u][v]=c;
        G[v][u]=c;
    }          
    floy();      
    int q;
    cin >> q;
    for (int i=0;i<q;i++)
    {
        cin >> u >> v;
        cout << G[u][v] << endl;
    }
    return 0;
}