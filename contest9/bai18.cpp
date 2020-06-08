#include<iostream>
#include<queue>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;

int v,e,x,y,check[1005];
vector< vector<int> > a;

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    check[u]=1;
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        for (int i=0;i<a[s-1].size();i++)
            if (check[a[s-1][i]]==0)
            {
                q.push(a[s-1][i]);
                check[a[s-1][i]]=1;
            }
    }
}

bool accept()
{
    for (int i=1;i<=v;i++)
        if (check[i]==0)
            return false;
    return true;
}

bool result()
{
    for (int i=1;i<=v;i++)
    {
        memset(check,0,sizeof(check));
        bfs(i);
        if (accept()==false)
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
        a.clear();
        cin >> v >> e;
        a.resize(v);
        for (int i=0;i<e;i++)
        {
            cin >> x >> y;
            a[x-1].push_back(y);
        }
        for (int i=0;i<v;i++)
            sort(a[i].begin(),a[i].end());
        if (result()==true)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}