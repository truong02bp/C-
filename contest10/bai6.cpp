#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;

int n,m,x,y,check[100005],cnt;
vector< vector<int> > a;

void dfs(int u)
{
    check[u]=1;
    cnt++;
    for (int i=0;i<a[u].size();i++)
        if (check[a[u][i]]==0)
            dfs(a[u][i]);
}

void result()
{
    memset(check,0,sizeof(check));
    int rs = 0;
    for (int i=1;i<=n;i++)
        if (check[i]==0)
        {
            cnt=0;
            dfs(i);
            rs = max(rs,cnt);
        }
    cout << rs << endl;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        a.clear();
        a.resize(n+30);
        for (int i=0;i<m;i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for (int i=1;i<=n;i++)
            sort(a[i].begin(),a[i].end());
        result();
    }
    return 0;
}