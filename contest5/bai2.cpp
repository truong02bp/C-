#include<iostream>
#include<algorithm>

using namespace std;

int n,f[1005],a[1005];

void result()
{
    int ans = 1;
    f[0] = 0;
    for (int i=1;i<=n;i++)
    {
        f[i] = 1;
        for (int j=1;j<i;j++)
            if (a[j] < a[i])
                f[i] = max(f[i],f[j]+1);
        ans = max(ans,f[i]);
    }
    cout << ans << endl;
}

int main()
{
    cin >> n;
    for (int i=1;i<=n;i++)
        cin >> a[i];
    result();
}