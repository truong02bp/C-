#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, k;
vector<int> a;

void result()
{
    long long sum1 = 0, sum2 = 0;
    sort(a.begin(), a.end());
    if (k <= n / 2)
    {
        for (int i = 0; i < k; i++)
            sum1 += a[i];
        for (int i = k; i < n; i++)
            sum2 += a[i];
    }
    else
    {
        for (int i=n-1;i>=n-k;i--)
            sum2+=a[i];
        for (int i=n-k-1;i>=0;i--)
            sum1+=a[i];
    }
    cout << sum2-sum1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        result();
    }
    return 0;
}