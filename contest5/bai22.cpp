#include<iostream>
#include<algorithm>
using namespace std;
int n,a[1000005];
long long f[1000005];
void result()
{
    f[0]=0;
    for (int i=1;i<=n;i++)
        f[i] = max(f[i-1],f[i-2]+a[i]);
    cout << f[n] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=1;i<=n;i++)
            cin >> a[i];
        result();
    }
    return 0;
}