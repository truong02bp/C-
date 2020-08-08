#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

int n,x,y,check[1005];
vector< vector<int> > a;

void dfs(int u)
{
    check[u] = 1;
    for (int i=0;i<a[u].size();i++)
        if (check[a[u][i]]==0)
            dfs(a[u][i]); 
}

bool result()
{
    int rs=0;
    for (int i=1;i<=n;i++)
        if (check[i]==0)
        {
            dfs(i);
            rs++;
        }
    if (rs==1)
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a.clear();
        a.resize(n+1);
        memset(check,0,sizeof(check));
        for (int i=0;i<n-1;i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        // for (int i=1;i<=n;i++)
        //     sort(a[i].begin(),a[i].end());
        if (result()==true)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl; 
    }
    return 0;
}