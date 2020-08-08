#include<bits/stdc++.h>
using namespace std;

int n,m,x,y,color[1005];
vector< vector<int> > a;

bool check;

void Try(int u , int mau)
{
    color[u] = mau;
    for (int i=0;i<a[u].size();i++)
        if (color[a[u][i]]==0)
        {
            Try(a[u][i],3-mau);
        }
        else 
        {
            if (color[a[u][i]]==color[u])
                check=true;
        }
}
// void dfs(int u , int mau)
// {
//     color[u] = mau;
//     for (int i=0;i<a[u].size();i++)
//         if (color[a[u][i]]==0)
//         {
//             dfs(a[u][i],3-mau);
//         }
//         else 
//             if (color[u] == color[a[u][i]])
//                 check=true;
// }
bool solve()
{
    memset(color,0,sizeof(color));
    check = false;
    for (int i=1;i<=n;i++)
        if (color[i]==0)
        {
             Try(i,1);
            // dfs(i,1);
            if (check==true)
                return false;
        }
    return true;    
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
        if (solve())
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;    
    }
    return 0;
}