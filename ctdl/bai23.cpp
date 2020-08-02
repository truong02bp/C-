#include<iostream>
using namespace std;

int n,a[10][10],kt;
bool check[10][10];
string rs;

void Try(int i , int j , int k)
{
    if (i==n && j==n)
    {
        kt=1;
        for (int x=0;x<k;x++)
            cout << rs[x];
        cout <<" ";    
    }
    else 
    {
        if (i<n && a[i+1][j]==1 && check[i+1][j]==false)
        {
            check[i+1][j]=true;
            rs[k]='D';
            Try(i+1,j,k+1);
            check[i+1][j]=false;
        }
        if (j>1 && a[i][j-1]==1 && check[i][j-1]==false)
        {
            check[i][j-1]=true;
            rs[k]='L';
            Try(i,j-1,k+1);
            check[i][j-1]=false;
        }
        if (j<n && a[i][j+1]==1 && check[i][j+1]==false)
        {
            check[i][j+1]=true;
            rs[k]='R';
            Try(i,j+1,k+1);
            check[i][j+1]=false;
        }
        if (i>1 && a[i-1][j]==1 && check[i-1][j]==false)
        {
            check[i-1][j]=true;
            rs[k]='U';
            Try(i-1,j,k+1);
            check[i-1][j]=false;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=1;i<=n;i++)
            for (int j=1;j<=n;j++)
            {
                cin >> a[i][j];
                check[i][j]=false;
            }
        rs = "",kt=0;
        check[1][1]=true;
        if (a[1][1]==0)
            cout << -1;
        else 
        {
            Try(1,1,0);
            if (kt==0)
                cout << -1;
        }
        cout << endl;        
    }
    return 0;
}