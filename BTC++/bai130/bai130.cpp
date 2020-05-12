#include<iostream>
using namespace std;

void nhap(int a[][100] , int n , int m)
{
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            cin >> a[i][j];
}
void Display(int a[][100] , int n , int m)
{
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<m-i;j++)
            cout << a[i][j] <<" ";
        for (int j=i;j<n-i;j++)
            cout << a[j][m-i] <<" ";
        for (int j=m-1;j>=i;j--)
            cout << a[n-i][m-i] <<" ";
        for (int j=n-i;j>i;j--)
            cout << a[j][i]<<" ";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m,n;
        cin >> m >> n;
        int a[100][100];
        nhap(a,n,m);
        Display(a,n,m);
    }
    return 0;
}