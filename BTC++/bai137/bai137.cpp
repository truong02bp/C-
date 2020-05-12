#include<iostream>
using namespace std;


void Result(int a[][100] , int n , int m)
{
    int c[100][100];
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            c[i][j]=0;
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
        {
            if (a[i][j]==1)
            {
                for(int t=0;t<n;t++)
                    c[t][j]=1;
                for (int k=0;k<m;k++)
                    c[i][k]=1;
            }
        }
    for (int i=0;i<n;i++)
    { 
        for (int j=0;j<m;j++)
            cout << c[i][j] <<" ";
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,a[100][100];
        cin >> n >> m;
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> a[i][j];
        Result(a,n,m);
    }
    return 0;
}
