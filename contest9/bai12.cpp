#include<iostream>
#include<queue>
#include<string.h>
using namespace std;

int V,E,u,v,x,y,a[1005][1005],truoc[1005];

void bfs()
{
    queue<int> q;
    q.push(u);
    truoc[u]=1;
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        for (int i=1;i<=V;i++)
            if (truoc[i]==0 && a[s][i]==1)
            {
                q.push(i);
                truoc[i]=s;
            }
    }
}
void result()
{
    int index=0,temp=v,rs[1005];
    bfs();
    while (temp!=u)
    {
        rs[index++] = temp;
        temp = truoc[temp];
    }
    rs[index++] = temp;
    for (int i=index-1;i>=0;i--)
        cout << rs[i] <<" ";
    cout << endl;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(a,0,sizeof(a));
        memset(truoc,0,sizeof(truoc));
        cin >> V >> E >> u >> v;
        for (int i=1;i<=E;i++)
        {
            cin >> x >> y;
            a[x][y]=1;
            a[y][x]=1;
        }
        result();
    }
    return 0;
}