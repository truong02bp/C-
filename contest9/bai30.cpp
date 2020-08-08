#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<string.h>
using namespace std;

int v,e,x,y,check[1005];
vector< vector<int> > a,vao,ra;

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    check[u]=1;
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        for (int i=0;i<a[s].size();i++)
            if (check[a[s][i]]==0)
            {
                q.push(a[s][i]);
                check[a[s][i]]=1;
            }
    }
}

int result()
{
    bfs(1);
    for (int i=1;i<=v;i++)
    {   
        if (check[i]==0)
            return 0;
        if (ra[i].size()!=vao[i].size())
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e;
        a.clear();
        a.resize(v+1);
        vao.clear();
        vao.resize(v+1);
        ra.clear();
        ra.resize(v+1);
        memset(check,0,sizeof(check));
        for (int i=0;i<e;i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
            vao[y].push_back(x);
            ra[x].push_back(y);
        }
        cout << result() << endl;
    }
    return 0;
}