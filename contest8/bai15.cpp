#include<iostream>
#include<string.h>
#include<queue>
using namespace std;

int m,n,b[1005][1005],rs[1005][1005];
typedef pair<int,int> ii;

int result()
{
    queue<ii> a;
    memset(rs,-1,sizeof(rs));
    a.push(ii(1,1));
    rs[1][1]=0;
    while (!a.empty())
    {
        ii temp = a.front();
        a.pop();
        int x = temp.first , y = temp.second;
        if (rs[x][y+ b[x][y] ] == -1)
        {
            if (x == m && y+b[x][y]==n)
                return rs[x][y]+1;
            rs[x][y + b[x][y] ] = rs[x][y]+1;
            a.push(ii(x,y+b[x][y]));
        }
        if (rs[x+b[x][y]][y] == -1)
        {
            if (x+b[x][y] == m && y==n)
                return rs[x][y]+1;
            rs[x+b[x][y]][y] = rs[x][y]+1;
            a.push(ii(x+b[x][y],y));
        }
    }
    if (a.empty())
        return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        for (int i=1;i<=m;i++)
            for (int j=1;j<=n;j++)
                cin >> b[i][j];
        cout << result() << endl;
    }
    return 0;
}