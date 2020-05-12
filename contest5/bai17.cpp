#include<iostream>
#include<algorithm>
using namespace std;

int n,a[1005];

void result()
{
    int tang[1005],giam[1005],ans=0;
    for (int i=1;i<=n;i++)
    {
        tang[i] = a[i];
        for (int j=1;j<i;j++)
            if (a[j] < a[i])
                tang[i] = max(tang[i],tang[j]+a[i]);
    }
    for (int i=n;i>0;i--)
    {
        giam[i] = a[i];
        for (int j=n;j>i;j--)
            if (a[j] < a[i])
                giam[i] = max(giam[i],giam[j]+a[i]);
    }
    for (int i=1;i<=n;i++)
        ans = max(ans,tang[i]+giam[i]-a[i]);
    cout << ans << endl;
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