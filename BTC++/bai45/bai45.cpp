#include<iostream>
using namespace std;

void Sinh(int a[] , int n , int k);
void Xuat(int a[] , int n , int k);
void KhoiTao(int a[] , int n , int k);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[20],n,k;
        cin >> n >> k;
        KhoiTao(a,n,k);
        Xuat(a,n,k);
        Sinh(a,n,k);
        cout << endl;
    }
    return 0;
}

void KhoiTao(int a[] , int n , int k)
{
    for (int i=1;i<=k;i++)
        a[i]=i;
}
void Xuat(int a[] , int n , int k)
{
    for (int i=1;i<=k;i++)
        cout << a[i];
    cout << " ";
}
void Sinh(int a[] , int n, int k)
{
    int i=k;
    while (a[i]==n-k+i)
        i--;
    if (i>0)
    {
        a[i]++;
        for (int j=i+1;j<=k;j++)
        a[j]=a[j-1]+1;
        Xuat(a,n,k);
        Sinh(a,n,k);
    }
}