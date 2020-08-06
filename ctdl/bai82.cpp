#include<bits/stdc++.h>
using namespace std;

int n,a[1005],f[1005],rs;

int main()
{
    cin >> n;
    for (int i=1;i<=n;i++)
        cin >> a[i];
    rs=1;
    f[0]=0;
    for (int i=1;i<=n;i++)
    {
        f[i]=1;
        for (int j=1;j<i;j++)
            if (a[j] < a[i])
                f[i] = max(f[i],f[j]+1);
        rs = max(rs,f[i]);        
    }
    cout << rs << endl;
    return 0;
}