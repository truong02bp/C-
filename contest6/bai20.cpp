#include<iostream>
#include<algorithm>
using namespace std;

int n,k,a[100005],index;

void result()
{
    long long cnt = 0;
    sort(a,a+n);
    for (int i=0;i<n;i++)
    {
        index = i;
        int last = lower_bound(a+i,a+n,a[i]+k)-a-1;
        cnt+= last-index;
    }
    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i=0;i<n;i++)
            cin >> a[i];
        result();
    }
    return 0;
}