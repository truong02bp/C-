#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
int m,n,a[1005][1005],rs[1005][1005];

int result()
{
    memset(rs,-1,sizeof(rs));
    queue<ii> q;
    rs[1][1]=0;
    q.push(ii(1,1));
    while (!q.empty())
    {
        ii value = q.front();
        q.pop();
        int x = value.first , y = value.second;
        if (rs[x][y+ a[x][y] ]==-1)
        {
            if (x == m && y+a[x][y]==n)
                return rs[x][y]+1;
            q.push(ii(x,y+a[x][y]));
            rs[x][y+a[x][y]] = rs[x][y]+1;
        }
        if (rs[x+a[x][y]][y]==-1)
        {
            if (x+a[x][y]==m && y==n)
                return rs[x][y]+1;
            q.push(ii(x+a[x][y],y));
            rs[x+a[x][y]][y] = rs[x][y]+1;    
        }
    }
    if (q.empty())
        return -1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> m >> n;
        for (int i=1;i<=m;i++)
            for (int j=1;j<=n;j++)
                cin >> a[i][j];
        cout << result() << endl;        
    }
    return 0;
}