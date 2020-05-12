#include<iostream>
#include<algorithm>
using namespace std;

int n,k,a[100005],cnt=0,index;

void find(int a[] , int l , int r)
{
    if (l > r)
        return;
    int mid = (l+r)/2;
    if ((abs(a[mid]-a[index]) < k) && index!=mid)
        cnt++;
    find(a,l,mid-1);
    find(a,mid+1,r);
}

void result()
{
    cnt = 0;
    sort(a,a+n);
    for (int i=0;i<n;i++)
    {
        index = i;
        find(a,0,n-1);
    }
    cout << cnt/2 << endl;
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