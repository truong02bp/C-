#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int n;

void result()
{
    int f[10005],a[105],x = sqrt(n);
    for (int i=1;i<=x;i++)
        a[i] = i*i;
    f[0]=0;
    for (int i=1;i<=n;i++)
    {
        f[i]=99999;
        for (int j=1;j<=x;j++)
            if (a[j] <= i)
            {
                f[i] = min(f[i],f[i-a[j]]+1);
            }
    }
    cout << f[n] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        result();
    }
}