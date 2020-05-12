#include<iostream>
using namespace std;

int a[100][100] , n , m, rs;

void DFS(int u , int i)
{
    if (i > rs)
        rs = i;
    for (int j=0;j<n;j++)
        if (a[u][j]==1)
        {
            a[u][j]=0;
            a[j][u]=0;
            DFS(j,i+1);
            a[u][j]=1;
            a[j][u]=1;
        }
}


void result()
{
    rs = 0;
    for (int i=0;i<n;i++)
    {
        DFS(i,0);
    }
    cout << rs << endl;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i=0;i<n;i++)
            for (int j=0;j<n;j++)
                a[i][j]=0;
        for (int i=0;i<m;i++)
        {
            int u,v;
            cin >> u >> v;
            a[u][v]=1;
            a[v][u]=1;
        }    
        result();
    }
    return 0;
}