#include<bits/stdc++.h>
using namespace std;

int v,e,u,check[1005],x,y;
vector< vector<int> > a;

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    check[u]=1;
    while(!q.empty())
    {
        int s = q.front();
        cout << s <<" ";
        q.pop();
        for (int i=0;i<a[s].size();i++)
            if (check[a[s][i]]==0)
            {
                check[a[s][i]]=1;
                q.push(a[s][i]);
            }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> v >> e >> u;
        a.clear();
        a.resize(v+10);
        memset(check,0,sizeof(check));
        for (int i=0;i<e;i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
        }
        bfs(u);
        cout << endl;
    }
    return 0;
}