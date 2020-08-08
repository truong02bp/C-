#include<bits/stdc++.h>
using namespace std;

int v,e,m,x,y,color[1005];
vector< vector<int> > a;

bool check()
{
    for (int i=1;i<=v;i++)
        for (int j=0;j<a[i].size();j++)
            if (color[i] == color[a[i][j]])
                return false;
    return true;            
}

bool solve(int k)
{
    if (k==v+1)
    {
        if(check())
            return true;  
        return false;    
    }
    for (int i=1;i<=m;i++)
    {
        color[k] = i;
        if (solve(k+1))
            return true;
        color[k]=0;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e >> m;
        a.clear();
        a.resize(v+50);
        memset(color,0,sizeof(color));
        for (int i=0;i<e;i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        if (solve(1))
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;     
    }
    return 0;
}