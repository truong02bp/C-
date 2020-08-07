#include<bits/stdc++.h>
using namespace std;

int n,m,x,y,q,check[1005];

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
        cin >> n >> m;
        a.clear();
        a.resize(n+50);
        for (int i=0;i<m;i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        cin >> q;
        for (int i=0;i<q;i++)
        {
            cin >> x >> y;
            memset(check,0,sizeof(check));
            dfs(x);
            if (check[y]==0)
                cout << "NO" << endl;
            else 
                cout << "YES" << endl;    
        }
    }
    return 0;
}

