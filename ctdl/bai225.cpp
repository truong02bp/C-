#include<bits/stdc++.h>
using namespace std;

int G[1005][1005],v,e,x,y,k;

int result()
{
    int d[1005];
    for (int i=1;i<=v;i++)
        d[i]=1e7;
    d[1]=0;    
    for (int k=1;k<=v-2;k++)
        for (int i=1;i<=v;i++)
            for (int j=1;j<=v;j++)
                if (d[i] > d[j] + G[j][i])
                    d[i] = d[j]+G[j][i];
    for (int i=1;i<=v;i++)
        for (int j=1;j<=v;j++)
            if (d[i] > d[j]+G[j][i])
                return 1;
    return 0;            
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> v >> e;
        for (int i=1;i<=v;i++)
            for (int j=1;j<=v;j++)
                if (i==j)
                    G[i][j]=0;
                else 
                    G[i][j]=1e7;
        for (int i=0;i<e;i++)
        {
            cin >> x >> y >> k;
            G[x][y]=k;
        }
        cout << result() << endl;                 
    }
    return 0;
}