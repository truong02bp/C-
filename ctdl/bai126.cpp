#include<bits/stdc++.h>
using namespace std;

int n,a[1000005];

int partition(int a[], int l , int r)
{
    int x = a[r],i=l;
    for (int j=l;j<r;j++)
        if (a[j] <= x)
        {
            swap(a[i],a[j]);
            i++;
        }
    swap(a[i],a[r]);
    return i;    
}
void quicksort(int a[] , int l , int r)
{
    if (l < r)
    {
        int mid = partition(a,l,r);
        quicksort(a,l,mid-1);
        quicksort(a,mid+1,r);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i];
        quicksort(a,0,n-1);
        for (int i=0;i<n;i++)
            cout << a[i] <<" ";
        cout << endl;        
    }
    return 0;
}