#include<bits/stdc++.h>
using namespace std;

int v,e,u,check[1005],x,y;
vector< vector<int> > a;

void dfs(int u)
{
    check[u]=1;
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
        cin >> v >> e;
        a.clear();
        a.resize(v+10);
        memset(check,0,sizeof(check));
        for (int i=0;i<e;i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        int rs=0;
        for (int i=1;i<=v;i++)
            if (check[i]==0)
            {
                rs++;
                dfs(i);
            }
        cout << rs << endl;
    }
    return 0;
}