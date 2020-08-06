#include<iostream>
using namespace std;

int n, a[1005],f[1005];

void result()
{
    int rs=1;
    for (int i=0;i<n;i++)
    {
        f[i]=1;
        for (int j=0;j<i;j++)
            if (a[j] < a[i])
                f[i] = max(f[i],f[j]+1);
        rs = max(rs,f[i]);
    }
    cout << n - rs << endl;
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