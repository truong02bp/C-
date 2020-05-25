#include<iostream>
using namespace std;

int n,a[10005],f[10005];

void result()
{
    f[0]=0;
    int rs = 0;
    for (int i=0;i<n;i++)
    {
        f[i] = a[i];
        for (int j=0;j<i;j++)
            if (a[j] < a[i])
                f[i] = max(f[i],f[j]+a[i]);
        rs = max(rs,f[i]);
    }
    cout << rs << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i];
        result();
    }
    return 0;
}