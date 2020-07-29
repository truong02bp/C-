#include<iostream>
#include<fstream>
using namespace std;

int a[1005][1005];
int n;
ifstream in("dijkstra.txt");

void Dijktra(int u)
{
    int chuagan[1000],d[1000],truoc[1000];
    for (int i=1;i<=n;i++)
    {
        d[i] = INT16_MAX;
        truoc[i] = 0;
        chuagan[i] = 0;
    }
    d[u]=0;
    truoc[u]=0;
    for (int i=1;i<n;i++)
    {
        int min = INT16_MAX , v=0;
        for (int i=1;i<=n;i++)
            if (d[i] < min && chuagan[i]==0)
            {
                min = d[i];
                v = i;
            }
        chuagan[v] = 1;    
        for (int i=1;i<=n;i++)
            if (d[i] > d[v]+a[v][i])
            {
                d[i] = d[v]+a[v][i];
                truoc[i] = v;
            }    
    }
    for (int i=1;i<=n;i++)
        cout << d[i] <<" ";  
}

int main()
{
    in >> n;
    int x;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
        {
            in >> x;
            if (x==-1)
                a[i][j] = INT16_MAX;
            else 
                a[i][j] = x;
        }
    cout <<"Min : ";      
    Dijktra(1); 
    return 0;    
}