#include <iostream>
using namespace std;

void result(int a[], int n, int k)
{
    int i = k;
    while (a[i] == n - k + i)
        i--;
    if (i > 0)
    {
        a[i]++;
        for (int j=i+1;j<=k;j++)
            a[j] = a[j-1]+1;
        for (int j=1;j<=k;j++)
            cout << a[j] <<" ";
    }
    else
    {
        for (int j = 1; j <= k; j++)
            cout << j << " ";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        int a[100000];
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        result(a, n, k);
        cout << endl;
    }
    return 0;
}