#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

int v,e,x,y,m,color[1005];
vector< vector<int> > a;

bool check_Color()
{
    for (int i=1;i<=v;i++)
        for (int j=0;j<a[i].size();j++)
            if (color[i] == color[a[i][j]])
                return false;
    return true;
}

bool result(int k)
{
    if (k == v+1)
    {
        if (check_Color()==true)
            return true;
        return false;
    }
    for (int j=1;j<=m;j++)
    {
        color[k] = j;
        if (result(k+1))
            return true;
        color[k] = 0;
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
        a.resize(v+5);
        memset(color,0,sizeof(color));
        for (int i=0;i<e;i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        if (result(1))
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}