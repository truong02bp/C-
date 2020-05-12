#include <iostream>
using namespace std;

int n = 1, k = 1, s = 1, cnt, sum, a[100];

void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        sum += j;
        if (sum <= s)
        {
            if (i == k)
            {
                if (sum == s)
                    cnt++;
            }
            else
                Try(i + 1);
        }
        sum -= j;
    }
}

int main()
{
    while (1)
    {
        cnt = 0, sum = 0;
        a[0] = 0;
        cin >> n >> k >> s;
        if (n == 0 && k == 0 && s == 0)
            break;
        else
        {
            Try(1);
            cout << cnt << endl;
        }
    }
    return 0;
}