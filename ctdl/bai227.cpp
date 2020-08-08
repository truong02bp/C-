#include<bits/stdc++.h>
using namespace std;

long long G[1005][1005];
int v,e,k,x,y,u;

void bellman_ford()
{
    long long d[1005];
    for (int i=1;i<=v;i++)
        d[i]=1e18;
    d[u]=0;
    for (int k=1;k<=v-2;k++)
        for (int i=1;i<=v;i++)
            for(int j=1;j<=v;j++)
                if (d[i] > d[j] + G[j][i])
                    d[i] = d[j]+G[j][i];
    for (int i=1;i<=v;i++)
        for (int j=1;j<=v;j++)
            if (d[i] > d[j] + G[j][i])
            {
                cout << -1 << endl;   
                return ;
            }
    for (int i=1;i<=v;i++)
        if (d[i]!=1e18)
            cout << d[i] <<" ";
        else 
            cout << "INFI" <<" ";
    cout << endl;                                     
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> v >> e >> u;
        for (int i=1;i<=v;i++)
            for (int j=1;j<=v;j++)
                if (i==j)
                    G[i][j]=0;
                else 
                    G[i][j]=1e18;
        for (int i=0;i<e;i++)
        {
            cin >> x >> y >> k;
            G[x][y]=k;
        }             
        bellman_ford();  
    }
}