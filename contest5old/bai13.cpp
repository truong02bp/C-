#include <iostream>
#include <algorithm>
using namespace std;

int n;
long long f[10005];

void result()
{
    int i, i2 = 0, i3 = 0, i5 = 0;
    long long next2 = 2, next3 = 3, next5 = 5;
    f[0] = 1;
    for (int i = 1; i <= 10000; i++)
    {
        long long temp = min(min(next2, next3), next5);
        f[i] = temp;
        if (temp == next2)
        {
            i2++;
            next2 = f[i2] * 2;
        }
        if (temp == next3)
        {
            i3++;
            next3 = f[i3] * 3;
        }
        if (temp == next5)
        {
            i5++;
            next5 = f[i5] * 5;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    result();
    while (t--)
    {
        cin >> n;
        cout << f[n - 1] << endl;
    }
    return 0;
}