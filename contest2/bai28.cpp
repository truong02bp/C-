#include <iostream>
#include <algorithm>
using namespace std;

int n, x, a[30], sum, b[100], kt;

void in(int i)
{
    cout << "[";
    for (int j = 1; j <i; j++)
        cout << b[j] << " ";
    cout << b[i] << "] ";
}
void Try(int i)
{
    for (int j = 0; j < n; j++)
    {
        if (a[j] >= b[i-1])
        {
            sum += a[j];
            b[i] = a[j];
            if (sum == x)
                {
                    in(i);
                    kt = 1;
                }
            else 
                if (sum < x)
                {
                   Try(i + 1);
                }
            sum -= a[j];
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sum = 0, kt = 0;
        cin >> n >> x;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        b[0] = 0;
        sort(a, a+n);
        Try(1);
        if (kt == 0)
            cout << "-1";
        cout << endl;
    }
    return 0;
}