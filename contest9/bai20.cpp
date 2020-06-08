#include<iostream>
#include<queue>
#include<algorithm>
#include<string.h>
using namespace std;

int v,e,x,y,check[1005];
vector< vector<int > > a;

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
            return true;
    return false;
}
bool result()
{
    for (int i=1;i<=v;i++)
    {
        memset(check,0,sizeof(check));
        check[i]=1;
        if (i==1)
            bfs(2);
        else 
            bfs(1);
        if (accept()==true)
            cout << i <<" ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e;
        a.clear();
        a.resize(v);
        for (int i=0;i<e;i++)
        {
            cin >> x >> y;
            a[x-1].push_back(y);
            a[y-1].push_back(x);
        }
        result();
    }
    return 0;
}