#include<iostream>
#include<queue>
#include<string.h>
using namespace std;

int v,e,x,y,u,a[1005][1005],check[1005];

void bfs()
{
    queue<int> q;
    q.push(u);
    check[u]=1;
    cout << u <<" ";
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        for (int i=1;i<=v;i++)
            if (check[i]==0 && a[s][i]==1)
            {
                cout << i <<" ";
                q.push(i);
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
        memset(a,0,sizeof(a));
        memset(check,0,sizeof(check));
        cin >> v >> e >> u;
        for (int i=1;i<=e;i++)
        {
            cin >> x >> y;
            a[x][y] = 1;
        }
        bfs();
    }
    return 0;
}