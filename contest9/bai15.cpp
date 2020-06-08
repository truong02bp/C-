#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

int v,e,x,y,a[1005][1005],check[1005];

void dfs(int u)
{
    stack<int> sta;
    sta.push(u);
    check[u]=1;
    while (!sta.empty())
    {
        int s = sta.top();
        sta.pop();
        for (int i=1;i<=v;i++)
            if (check[i]==0 && a[s][i]==1)
            {
                sta.push(s);
                sta.push(i);
                check[i]=1;
                break;
            }
    }
}
void result()
{
    int rs = 0;
    for (int i=1;i<=v;i++)
        if(check[i]==0)
        {
            dfs(i);
            rs++;
        }
    cout << rs << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(a,0,sizeof(a));
        memset(check,0,sizeof(check));
        cin >> v >> e;
        for (int i=1;i<=e;i++)
        {
            cin >> x >> y;
            a[x][y]=1;
            a[y][x]=1;
        }
        result();
    }
    return 0;
}