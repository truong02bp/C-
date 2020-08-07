#include<bits/stdc++.h>
using namespace std;

int V,E,u,v,x,y;

vector< vector<int> > a;
int check[1005],truoc[1005];

void dfs(int u)
{
    check[u]=1;
    for (int i=0;i<a[u].size();i++)
        if (check[a[u][i]]==0)
        {
            truoc[a[u][i]]=u;
            dfs(a[u][i]);
        }
}
void timDuong()
{
    if (check[v]==0)
        cout << -1 << endl;
    else 
    {
        int temp = v,rs[1005],index=0;
        while (temp != u)
        {
            rs[index++] = temp;
            temp = truoc[temp];
        }
        rs[index++] = u;
        for (int i=index-1;i>=0;i--)
            cout << rs[i] <<" ";
        cout << endl;
    }    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        a.clear();
        cin >> V >> E >> u >> v;
        a.resize(V+150);
        memset(check,0,sizeof(check));
        for (int i=0;i<E;i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
        }
        dfs(u);
        timDuong();
    }
    return 0;
}