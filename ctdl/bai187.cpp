#include<bits/stdc++.h>
using namespace std;

int v,e,u,check[1005],x,y;
vector< vector<int> > a;

void dfs(int u)
{
    check[u]=1;
    cout << u <<" ";
    for (int i=0;i<a[u].size();i++)
        if (check[a[u][i]]==0)
            dfs(a[u][i]);
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
            a[y].push_back(x); 
        }
        dfs(u);
        cout << endl;
    }
    return 0;
}