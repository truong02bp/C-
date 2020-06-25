#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

int x,y,v,e,check[100005];

vector< vector<int> > a;

void dfs(int u)
{
    check[u]=1;
    for (int i=0;i<a[u].size();i++)
        if (check[a[u][i]]==0)
            dfs(a[u][i]);
}

bool result()
{
    memset(check,0,sizeof(check));
    dfs(1);
    for (int i=1;i<=v;i++)
        if (check[i]==0)
            return false;
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e;
        a.clear();
        a.resize(v+5);
        for (int i=0;i<e;i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        // for(int i=1;i<=v;i++)
        //     sort(a[i].begin(),a[i].end());
        if (result())
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}