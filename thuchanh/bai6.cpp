#include<iostream>
using namespace std;

int a[1000005],tang[1000005],giam[1000005],n;

void result()
{
    int rs=0;
    for (int i=1;i<=n;i++)
    {
        tang[i]=1;
        if (a[i] > a[i-1])
            tang[i] = tang[i-1]+1;
    }
    giam[n]=1;
    for (int i=n-1;i>0;i--)
    {
        giam[i]=1;
        if (a[i] > a[i+1])
        giam[i] = giam[i+1]+1;
    }
    for (int i=1;i<=n;i++)
        rs = max(rs,tang[i]+giam[i]-1);
    cout << rs << endl;
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