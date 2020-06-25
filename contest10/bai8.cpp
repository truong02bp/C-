#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;

int v,e,x,y,u,check[1005];
vector< vector<int> > a;
vector<int> dau,cuoi;
void dfs(int x)
{
    check[x]=1;
    for (int i=0;i<a[x].size();i++)
        if (check[a[x][i]]==0)
        {
            dau.push_back(x);
            cuoi.push_back(a[x][i]);
            dfs(a[x][i]);
        }
}
void result()
{
    memset(check,0,sizeof(check));
    dau.clear();
    cuoi.clear();
    dfs(u);
    if (dau.size() == v-1 )
    {
        for (int i=0;i<dau.size();i++)
            cout << dau[i] <<" " << cuoi[i] << endl;
    }
    else 
        cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e >> u;
        a.clear();
        a.resize(v+5);
        for (int i=0;i<e;i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        result();
    }
    return 0;
}