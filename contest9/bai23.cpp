#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

typedef vector< vector<int> > vv;
int v,e,x,y,check[1005];
bool rs;
vv a;

void dfs(int u , int v)
{
    check[u]=1;
    for (int i=0;i<a[u].size();i++)
        if (check[a[u][i]]==0)
            dfs(a[u][i],u);
        else 
            if (a[u][i]!=v)
                rs = true;
}

bool result()
{
    for (int i=1;i<=v;i++)
    {
        memset(check,0,sizeof(check));
        rs = false;
        dfs(i,0);
        if (rs==true)
            return true;
    }      
    return false;
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
        for (int i=0;i<e;i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for (int i=1;i<=v;i++)
            sort(a[i].begin(),a[i].end());
        if (result()==true)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}