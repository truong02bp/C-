#include<iostream>
#include<algorithm>
using namespace std;

int n,a[1005];

void result()
{
    int b[1005],c[100005],cnt=0;
    for (int i=0;i<n;i++)
        b[i]=a[i];
    sort(b,b+n);
    for (int i=0;i<n;i++)
        c[b[i]]=i;
    for (int i=0;i<n;i++)
    {
        if (a[i]!=b[i])
        {
            swap(a[i],a[c[a[i]]]);
            cnt++;
        }
    }
    cout << cnt << endl;
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