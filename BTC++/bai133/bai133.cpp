#include<iostream>
using namespace std;

void Display(int a[][100] , int n)
{
    for (int i=0;i<n;i++)
        cout << a[0][i] <<" ";
    for (int i=1;i<n-1;i++)
    {
        cout << a[i][0] << " ";
        cout << a[i][n-1] <<" ";
    }
    for (int i=0;i<n;i++)
        cout << a[n-1][i] <<" ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[100][100];
        for (int i=0;i<n;i++)
            for (int j=0;j<n;j++)
                cin >> a[i][j];
        Display(a,n);
    }
    return 0;
}