#include<iostream>
#include<string.h>
using namespace std;

int n,s,f[40005],a[300];

void result()
{
    memset(f,0,sizeof(f));
    f[0]=1;
    for (int i=1;i<=n;i++)
        for (int j=s;j>=a[i];j--)
            if (f[j]==0 && f[j-a[i]]==1)
                f[j]=1;
    if (f[s]==1)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        for (int i=1;i<=n;i++)
            cin >> a[i];
        result();
    }
    return 0;
}