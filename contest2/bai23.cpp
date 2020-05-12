#include <iostream>
using namespace std;

int n, a[15][15], kt;
bool check[15][15];
string rs;

void in(int k)
{
    for (int i = 1; i < k; i++)
        cout << rs[i];
    cout << " ";
}
void init()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            check[i][j] = false;
}
void Try(int i, int j, int k)
{
    if (i == n && j == n)
    {
        kt = 1;
        in(k);
    }
    else
    {
        if (i < n && a[i + 1][j] == 1 && check[i + 1][j] == false)
        {
            check[i + 1][j] = true;
            rs[k] = 'D';
            Try(i + 1, j, k + 1);
            check[i + 1][j] = false;
        }
        if (j > 1 && a[i][j - 1] == 1 && check[i][j - 1] == false)
        {
            check[i][j - 1] = true;
            rs[k] = 'L';
            Try(i, j - 1, k + 1);
            check[i][j - 1] = false;
        }
        if (j < n && a[i][j + 1] == 1 && check[i][j + 1] == false)
        {
            check[i][j + 1] = true;
            rs[k] = 'R';
            Try(i, j + 1, k + 1);
            check[i][j + 1] = false;
        }
        if (i > 1 && a[i - 1][j] == 1 && check[i - 1][j] == false)
        {
            check[i - 1][j] = true;
            rs[k] = 'U';
            Try(i - 1, j, k + 1);
            check[i - 1][j] = false;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        rs = "", kt = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        init();
        check[1][1] = true;
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
    return 0;
}