#include<iostream>
using namespace std;

int n,a[1000005],b[1000005];

void merge(int a[] , int l , int mid , int r)
{
    int i = l;
    int j = mid+1,k=l;
    while (i<= mid && j <= r)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else 
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while (i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while (j<=r)
    {
        b[k]=a[j];
        j++;
        k++;
    }
    for (int i=l;i<k;i++)
        a[i] = b[i];
}

void mergeSort(int a[] , int l , int r)
{
    int mid = (l+r)/2;
    if (l<r)
    {
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        merge(a,l,mid,r);
    }
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
        mergeSort(a,0,n-1);
        for (int i=0;i<n;i++)
            cout << a[i] <<" ";
        cout << endl;
    }
    return 0;
}