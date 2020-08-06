#include<iostream>
using namespace std;

int n,a[10000005],rs;

int find(int a[] , int l , int r)
{
    if (l>r)
        return -1;
    int mid=(l+r)/2;
    if (a[mid]!=mid && a[mid-1]==mid-1)
        return mid;
    if (a[mid] > mid)
        return find(a,l,mid-1);
    return find(a,mid+1,r);            
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=1;i<n;i++)
            cin >> a[i];
        
        cout << find(a,1,n) << endl;
    }
    return 0;
}