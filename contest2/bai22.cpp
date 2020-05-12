#include <iostream>
using namespace std;

int a[15][15], n, kt;
string rs;

void in(int k)
{
    for (int i = 1; i < k; i++)
        cout << rs[i];
    cout << " ";
}
void Try(int i, int j, int k)
{
    if (i == n && j == n)
    {
        kt = 1;
        in(k);
        return;
    }
    else
    {
        if (i < n && a[i + 1][j] == 1)
        {
            rs[k] = 'D';
            Try(i + 1, j, k + 1);
        }
        if (j < n && a[i][j + 1] == 1)
        {
            rs[k] = 'R';
            Try(i, j + 1, k + 1);
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
        rs = "", kt = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        if (a[1][1] == 0)
            cout << "-1";
        else
        {
            Try(1, 1, 1);
            if (kt == 0)
                cout << "-1";
        }
        cout << endl;
    }
}