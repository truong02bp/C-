#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int a[1005][1005];
string s;
void result()
{
    memset(a, 0, sizeof(a));
    int len = s.length(), rs = 1;
    for (int i = 0; i < len; i++)
        a[i][i] = 1;
    for (int k = 1; k < len; k++)
        for (int i = 0; i < len-k; i++)
        {
            int j = i + k;
            if (s[i] == s[j])
            {
                if (k == 1)
                    a[i][j] = 1;
                else
                    a[i][j] = a[i + 1][j - 1];
            }
            else
                a[i][j] = 0;
            if (a[i][j] == 1)
                rs = max(rs, j - i + 1);
        }
    cout << rs << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        result();
    }
    return 0;
}