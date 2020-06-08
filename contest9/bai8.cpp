#include<iostream>
#include<queue>
#include<string.h>
using namespace std;

int v,e,u,x,y,a[1005][1005],check[1005];

void bfs()
{
    queue<int> sta;
    sta.push(u);
    check[u]=1;
    cout << u <<" ";
    while (!sta.empty())
    {
        int s = sta.front();
        sta.pop();
        for (int i=1;i<=v;i++)
            if (check[i]==0 && a[s][i]==1)
            {
                sta.push(i);
                cout << i <<" ";
                check[i]=1;
            }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(check,0,sizeof(check));
        memset(a,0,sizeof(a));
        cin >> v >> e >> u;
        for (int i=1;i<=e;i++)
        {
            cin >> x >> y;
            a[x][y] = 1;
            a[y][x] = 1;
        }
        bfs();
    }
    return 0;
}