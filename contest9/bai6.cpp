#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

int v,u,e,x,y,a[1005][1005],check[1005];

void dfs()
{
    stack<int> sta;
    sta.push(u);
    check[u]=1;
    cout << u <<" ";
    while (!sta.empty())
    {
        int s = sta.top();
        sta.pop();
        for (int i=1;i<=v;i++)
            if (a[s][i]==1 && check[i]==0)
            {
                sta.push(s);
                sta.push(i);
                check[i]=1;
                cout << i <<" ";    
                break;
            }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(a,0,sizeof(a));
        memset(check,0,sizeof(check));
        cin >> v >> e >> u;
        for (int i=1;i<=e;i++)
        {
            cin >> x >> y;
            a[x][y]=1;
            a[y][x]=1;
        }
        dfs();
    }
    return 0;
}