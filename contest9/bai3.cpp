#include<iostream>
using namespace std;

int n,a[1005][1005];

int main()
{
    cin >> n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            cin >> a[i][j];
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)       
            if (a[i][j]==1)
                cout << j <<" ";
        cout << endl;
    }
    return 0;
}