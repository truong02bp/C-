#include<iostream>
using namespace std;

int n,m,u,v,c,a[1005][1005],q;

void floy()
{
    for (int k=1;k<=n;k++)        
        for (int i=1;i<=n;i++)
            for (int j=1;j<=n;j++)
                if (a[i][j] > a[i][k] + a[k][j])
                    a[i][j] = a[i][k] + a[k][j];                      
}

int main ()
{
    cin >> n >> m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            if (i==j)
                a[i][j] = 0;
            else     
                a[i][j] = 1e7;
    for (int i=1;i<=m;i++)
        {
            cin >> u >> v >> c;
            a[u][v] = c;
            a[v][u] = c;
        }
    floy();    
    cin >> q;
    for (int i=0;i<q;i++)
    {
        cin >> u >> v;
        cout << a[u][v] << endl;
    }     
    return 0;
}