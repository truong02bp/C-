#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
using namespace std; 

int m,n,x,y,u,v,q,check[1005];
vector< vector<int> > a;
void bfs(int temp)
{
    queue<int> q;
    q.push(temp);
    check[temp]=1;
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        for (int i=0;i<a[s-1].size();i++)
            if (check[a[s-1][i]]==0)
            {
                q.push(a[s-1][i]);
                check[a[s-1][i]]=1;
            }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
        cin >> n >> m;
        a.resize(n);
        for (int i=1;i<=m;i++)
        {
            cin >> u >> v;
            a[u-1].push_back(v);
            a[v-1].push_back(u);
        }
        cin >> q;
        for (int i=0;i<q;i++)
        {
            cin >> x >> y;
            memset(check,0,sizeof(check));
            bfs(x);
            if (check[y]==1)
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
    }
    return 0;
}