#include<iostream>
#include<string.h>
using namespace std;

typedef long long ll;
int v,e,x,y,k,u;
ll G[1005][1005];

void result()
{
    ll d[1005];
    int parent[1005];
    memset(parent,0,sizeof(parent));
    for (int i=1;i<=v;i++)
    {
        d[i] = G[u][i];
        parent[i] = u;
    }
    d[u] = 0;
    parent[u] = u;
    for (int k=1;k<=v-2;k++)
        for (int i=1;i<=v;i++)
            for (int j=1;j<=v;j++)
                if (d[i] > d[j] + G[j][i])
                {
                    d[i] = d[j] + G[j][i];
                    parent[i] = parent[j];
                }
    for (int i=1;i<=v;i++)
        for (int j=1;j<=v;j++)
            if (d[i] > d[j] + G[j][i])
            {
                cout << -1 << endl;
                return ;
            }         
    for (int i=1;i<=v;i++)
        if (parent[i] == u && d[i] != 1e9)
            cout << d[i] <<" ";
        else 
            cout << "INFI" <<" ";    
    cout << endl;                           
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e >> u;
        for (int i=1;i<=v;i++)
            for (int j=1;j<=v;j++)
                G[i][j] = 1e9;
        for (int i=0;i<e;i++)
        {
            cin >> x >> y >> k;
            G[x][y] = k;
        }    
        result();
    }
    return 0;
}