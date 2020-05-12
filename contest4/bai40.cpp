#include<iostream>
#include<algorithm>
using namespace std;

int a[1005],n;

int find(int a[] , int l , int r)
{
    if (l > r)
        return -1;
    int mid = (l+r)/2;
    if (a[mid]==1 && a[mid-1]==0)
        return mid;
    if (a[mid]==0)
        return find(a,mid+1,r);
    if (a[mid]==1)
        return find(a,l,mid-1);
}

void result()
{
    int index = find(a,0,n-1);
    if (index==-1)
    {
        if (a[0]==0)
            cout << n << endl;
        else 
            cout << 0 << endl;
    }
    else 
        cout << index << endl;
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