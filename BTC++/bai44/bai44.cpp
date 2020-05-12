#include<iostream>
using namespace std;

void Sinh(int a[] , int n);
void KhoiTao(int a[] , int n);
void Xuat(int a[] , int n);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,a[20];
        cin >> n;
        KhoiTao(a,n);
        Xuat(a,n);
        Sinh(a,n);
        cout << endl;
    }
    return 0;
}

void Sinh(int a[] , int n)
{
    int i=n;
    while (a[i]==1)
    {
        a[i]=0;
        i--;
    }
    a[i]=1;
    if (i>0)
    {
        Xuat(a,n);
        Sinh(a,n);
    }
}
void KhoiTao(int a[] , int n)
{
    for (int i=1;i<=n;i++)
        a[i]=0;
}
void Xuat(int a[] , int n)
{
    for (int i=1;i<=n;i++)
        cout << a[i];
    cout <<" ";
}