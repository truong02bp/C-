#include<iostream>
using namespace std;

int n,a[10000005],rs;

void find(int a[] , int l ,int r)
{
    if (l > r)
        return ;
    int mid = (l+r)/2;
    if (a[mid]-a[mid-1]==2)
    {
        rs = mid;
        return;
    }
    find(a,l,mid-1);
    find(a,mid+1,r);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=0;i<n-1;i++)
            cin >> a[i];
        find(a,0,n-1);
        cout << a[rs]-1 << endl;
    }
    return 0;
}