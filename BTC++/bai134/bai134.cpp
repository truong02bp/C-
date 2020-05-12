#include<iostream>
using namespace std;

void Display(int a[][100] , int n)
{
    for (int i=0;i<n;i++)
    {
        if (i%2==0)
        {
            for (int j=0;j<n;j++)
                cout << a[i][j] <<" ";
        }
        else
        {
            for (int j=n-1;j>=0;j--)
                cout << a[i][j] <<" ";
        }
    }
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