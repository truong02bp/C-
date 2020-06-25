#include<iostream>
#include<string.h>
using namespace std;

typedef long long ll;
int v,e,u,x,y,w;
ll G[1005][1005];

void result()
{
    ll d[1005];
    for (int i=1;i<=v;i++)
        d[i] = 1e18;
    d[u]=0;
    for (int k=1;k<=v-2;k++)
        for (int i=1;i<=v;i++)
            for (int j=1;j<=v;j++)
                if (d[i] > d[j] + G[j][i])
                    d[i] = d[j] + G[j][i];    
    for (int i=1;i<=v;i++)
        for (int j=1;j<=v;j++)
            if (d[i] > d[j] + G[j][i])
            {
                cout << -1 << endl;
                return;
            }          
    for (int i=1;i<=v;i++)
        if (d[i] != 1e18)
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
                G[i][j]=1e18;
        for (int i=0;i<e;i++)
        {
            cin >> x >> y >> w;
            G[x][y] = w;
        } 
        result();       
    }
    return 0;
}