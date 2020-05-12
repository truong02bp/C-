#include<iostream>
#include<vector>
using namespace std;

void nhap(int a[][100] , int n);
void Display(int a[][100], int n);

int main()
{
    int t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[100][100];
        nhap(a,n);
    }
}
void nhap(int a[][100] , int n)
{
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
}
void Display(int a[][100] , int n)
{
    bool check[101];
    for (int i=0;i<n;j++)
        check[a[0][i]]=true;
    int Count[10001];
    for (int i=1;i<n;i++)
    {
        
    }
}