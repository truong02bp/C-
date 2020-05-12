#include <iostream>
#include <vector>
using namespace std;

int result(int a[], int n, int k)
{
    int rs = 0;
    vector<bool> check(100, false);
    for (int i = 1; i <= k; i++)
    {
        check[a[i]] = true;
    }    
    int i = k;
    while (a[i] == n - k + i)
        i--;
    if (i > 0)
    {
        
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
        for (int i = 1; i <= k; i++)
            if (check[a[i]] == false)
                rs++;
    }
    else
        rs = k;
    return rs;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[100];
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        cout << result(a, n, k) << endl;
    }
    return 0;
}