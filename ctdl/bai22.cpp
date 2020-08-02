#include<iostream>
using namespace std;

int n,a[15][15],kt;
string rs;

void accept(int k)
{
    for (int i=0;i<k;i++)
        cout << rs[i]; 
    cout <<" ";    
}

void Try(int i , int j , int k)
{
    if (i == n-1 && j==n-1)
    {
        kt=1;
        accept(k);
    }
    else 
    {
        if (i<n-1 && a[i+1][j]==1)
        {
            rs[k]='D';
            Try(i+1,j,k+1);
        }
        if (j < n-1 && a[i][j+1]==1)
        {
            rs[k]='R';
            Try(i,j+1,k+1);
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
        for (int i=0;i<n;i++)
            for (int j=0;j<n;j++)
                cin >> a[i][j];
        kt=0;
        rs = "";   
        if (a[0][0]==0)
            cout << -1;
        else 
        {     
            Try(0,0,0); 
            if (kt==0)
                cout << -1;
        }
        cout << endl;       
    }
    return 0;
}