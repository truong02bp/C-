#include <iostream>
using namespace std;

void result(int a[], int n)
{
    int i = n - 1;
    while (a[i] > a[i + 1])
        i--;
    if (i > 0)
    {
        int k = n;
        while (a[i] > a[k])
            k--;
        int t = a[i];
        a[i] = a[k];
        a[k] = t;
        int l = i + 1, r = n;
        while (l <= r)
        {
            t = a[l];
            a[l] = a[r];
            a[r] = t;
            l++;
            r--;
        }
    }
    else
    {
        for (int i=1;i<=n;i++)
            a[i]=i;
    }
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[1001];
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        result(a, n);
    }
    return 0;
}