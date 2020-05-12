#include<iostream>
#include<algorithm>
using namespace std;

struct so
{
    int truoc;
    int sau;
};

int n;
so a[105];

bool dieuKien(so a , so b)
{
    return a.truoc < b.truoc;
}

void result()
{
    int f[105],ans=-1;
    sort(a+1,a+n+1,dieuKien);
    for (int i=1;i<=n;i++)
    {
        f[i]=1;
        for (int j=1;j<i;j++)
            if (a[j].sau < a[i].truoc)
            {
                f[i] = max(f[i],f[j]+1);
            }
        ans = max(ans,f[i]);
    }
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
            cin >> a[i].truoc >> a[i].sau;
        result();
    }
    return 0;
}