#include<iostream>
#include<stack>
#include<vector>
#include<string.h>
using namespace std;

int V,E,x,y,u,v,a[1005][1005],truoc[1005];

void dfs()
{
    stack<int> sta;
    sta.push(u);
    truoc[u]=1;
    while (!sta.empty())
    {
        int s = sta.top();
        if (s==v)
            break;
        sta.pop();
        for (int i=1;i<=v;i++)
            if (a[s][i]==1 && truoc[i]==0)
            {
                sta.push(s);
                sta.push(i);
                truoc[i]=s;
                break;
            }
    }
}
void result()
{
    dfs();
    if (truoc[v]==0)
        cout << -1;
    else 
    {
        int rs[1005],index=0,temp = v;
        while (temp!=u)
        {
            rs[index++] = temp;
            temp = truoc[temp];
        }
        rs[index++] = temp;
        for (int i=index-1;i>=0;i--)
            cout << rs[i] <<" ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> V >> E >> u >> v;
        memset(a,0,sizeof(a));
        memset(truoc,0,sizeof(truoc));
        for (int i=1;i<=E;i++)
        {
            cin >> x >> y;
            a[x][y]=1;
        }
        result();
    }
    return 0;
}