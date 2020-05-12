#include<iostream>
using namespace std;

void Sinh(int a[] , int n);
void KhoiTao(int a[] , int n);
void Display(int a[] , int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[20],n;
        cin >> n;
        KhoiTao(a,n);
        Display(a,n);
        Sinh(a,n);
        cout << endl;
    }
    return 0;
}
void KhoiTao(int a[] , int n)
{
    for (int i=1;i<=n;i++)
        a[i]=i;
}
void Display(int a[] , int n)
{
    for (int i=1;i<=n;i++)
        cout << a[i];
    cout <<" ";
}
void Sinh(int a[] , int n)
{
    int i=n-1;
    while (a[i]>a[i+1]) i--;
    if (i>0)
    {
        int k=n;
        while (a[i]>a[k]) k--;
        int temp;
        temp = a[i];
        a[i]=a[k];
        a[k]=temp;
        int l=i+1,r=n;
        while (l<=r)
        {
            temp=a[l];
            a[l]=a[r];
            a[r]=temp;
            l++;
            r--;
        }
        Display(a,n);
        Sinh(a,n);
    }
}