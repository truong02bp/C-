#include<iostream>
using namespace std;

typedef long long ll;
int n;
ll a[100005],b[100005];

void merge(ll a[] , int l , int mid , int r)
{
    int i=l,j=mid+1,k=l;
    while (i <= mid && j <= r)
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
    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= r)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    for (int i=l;i<=r;i++)
        a[i] = b[i];
}

void mergeSort(ll a[] , int l ,int r)
{
    int mid = (l+r)/2;
    if (l < r)
    {
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}

int main()
{
    cin >> n;
    for (int i=0;i<n;i++)
        cin >> a[i];
    mergeSort(a,0,n-1);
    for (int i=0;i<n;i++)
        cout << a[i] <<" ";
    cout << endl;
    return 0;
}