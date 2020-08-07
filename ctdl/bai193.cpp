#include<bits/stdc++.h>
using namespace std;

int v,V,E,u,check[1005],truoc[1005],x,y;
vector< vector<int> > a;

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    check[u]=1;
    while(!q.empty())
    {
        int s = q.front();
        q.pop();
        for (int i=0;i<a[s].size();i++)
            if (check[a[s][i]]==0)
            {
                truoc[a[s][i]]=s;
                check[a[s][i]]=1;
                q.push(a[s][i]);
            }
    }
}

void timDuong()
{
    if (truoc[v]==0)
        cout << -1 << endl;
    else 
    {
        vector<int> rs;
        int temp = v;
        while (temp!=u)
        {
            rs.push_back(temp);
            temp = truoc[temp];
        }
        rs.push_back(u);
        for (int i=rs.size()-1;i>=0;i--)
            cout << rs[i] <<" ";
        cout << endl;    
    }    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> V >> E >> u >> v;
        a.clear();
        a.resize(V+10);
        memset(check,0,sizeof(check));
        memset(truoc,0,sizeof(truoc));
        for (int i=0;i<E;i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
        }
        bfs(u);
        timDuong();
    }
    return 0;
}