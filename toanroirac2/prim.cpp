#include<iostream>
#include<fstream>
using namespace std;

ifstream in("prim.txt");

int a[1005][1005];
int n;

void Prim()
{
    int V[1000];
    int t=0,u,v,ts=0;
    for (int i=1;i<=n;i++)
        V[i]=0;
    u = 1;    
    V[u]=1;
    while (t<n-1)
    {
        int min = INT16_MAX;
        for (int i=1;i<=n;i++)
            for (int j=1;j<=n;j++)
                if (V[i]==1 && V[j]==0 && a[i][j] < min)
                {
                    min = a[i][j];
                    v = j;
                    u = i;
                }

        V[v] = 1;
        V[u] = 1;
        ts+=min;
        cout << "(" << u << "," << v <<") ";
        t++;
    }
    cout << ts << endl;    
}
int main()
{
    in >> n;
    int x;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
        {
            in >> x;
            if (x == -1)
                a[i][j] = INT16_MAX;
            else 
                a[i][j]=x;
        }    
    Prim();    
    return 0;    
}
