#include<iostream>
#include<queue>
#include<string.h>
using namespace std;

int v,e,x,y,a[1005][1005],check[1005];

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    check[u]=1;
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        for (int i=1;i<=v;i++)
            if (check[i]==0 && a[s][i]==1)
            {
                q.push(i);
                check[i]=1;
            }
    }
}
void result()
{
    int rs = 0;
    for (int i=1;i<=v;i++)
        if (check[i]==0)
        {
            bfs(i);
            rs++;
        }
    cout << rs << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(a,0,sizeof(a));
        memset(check,0,sizeof(check));
        cin >> v >> e;
        for (int i=1;i<=e;i++)
        {
            cin >> x >> y;
            a[x][y]=1;
            a[y][x]=1;
        }
        result();
    }
    return 0;
}