#include<iostream>
using namespace std;

int n,m,a[105][105],cnt;

void Try(int i, int j)
{
    if (i == m-1 && j == n-1)
        cnt++;
    else 
    {
        if (i < m-1)
            Try(i+1,j);
        if (j < n-1)    
            Try(i,j+1);
    }    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cnt=0;
        cin >> m >> n;
        for (int i=0;i<m;i++)
            for (int j=0;j<n;j++)
                cin >> a[i][j];
        Try(0,0);
        cout << cnt << endl;        
    }
    return 0;
}