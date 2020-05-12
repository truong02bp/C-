#include <iostream>
#include <string.h>
using namespace std;

int c, n, w[105], a[105][30000];

void result()
{
    memset(a,0,sizeof(a));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= c; j++)
            if (j >= w[i] && a[i - 1][j-w[i]] + w[i] > a[i - 1][j])
                a[i][j] = a[i-1][j- w[i]] + w[i];
            else
                a[i][j] = a[i-1][j];
    cout << a[n][c] << endl;
}

int main()
{
    cin >> c >> n;
    for (int i = 1; i <= n; i++)
        cin >> w[i];
    result();
    return 0; 
}