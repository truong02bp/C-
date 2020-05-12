#include<iostream>
using namespace std;

int n,x,a[10000005],index;
int findIndex(int a[] , int l ,int r)
{
    if (l > r)
        return -1;
    int mid = (l+r)/2;
    if (a[mid]>a[mid-1] && a[mid] > a[mid+1])
        return mid;
    if (a[mid] > a[0])
        return findIndex(a,mid+1,r);
    return findIndex(a,l,mid-1);
}
int find(int a[] , int l , int r)
{
    if (l > r)
        return -1;
    int mid = (l+r)/2;
    if (a[mid]==x)
        return mid;
    if (a[mid] > x)
        return find(a,l,mid-1);
    return find(a,mid+1,r);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        for (int i=0;i<n;i++)
            cin >> a[i];
        index = findIndex(a,0,n-1);
        if (index==n-1)
            cout << find(a,0,n-1)+1 << endl;
        else 
            {
                if (x >= a[0])
                    cout << find(a,0,index)+1 << endl;
                else 
                    cout << find(a,index+1,n-1)+1 << endl;
            }
    }
    return 0;
}