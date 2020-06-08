#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

int v,e,x,y,check[1005];
bool rs;
vector< vector<int> > a;

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    check[u] = 1;
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        for (int i=0;i<a[s].size();i++)
            if (check[a[s][i]]==0)
            {
                q.push(a[s][i]);
                check[a[s][i]]=1;
            }
            else 
                if (a[s][i]==u)
                    rs = true;
    }
}

bool result()
{
    for (int i=1;i<=v;i++)
    {
        memset(check,0,sizeof(check));
        rs = false;
        bfs(i);
        if (rs == true)
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