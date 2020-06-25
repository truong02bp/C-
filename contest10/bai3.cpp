#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

int x,y,v,e,color[1005],kt;
vector< vector<int> > a;

void dfs(int u , int mau)
{
    color[u] = mau;
    for (int i=0;i<a[u].size();i++)
        if (color[a[u][i]]==0)
        {
            dfs(a[u][i],3-mau);
        }
        else 
            if (color[u] == color[a[u][i]])
                kt=1;
}
bool result()
{
    memset(color,0,sizeof(color));
    kt=0;
    for (int i=1;i<=v;i++)
        if (color[i]==0)
        {
            dfs(i,1);
            if (kt==1)
                return false;
        }
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
        if (result()==true)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}