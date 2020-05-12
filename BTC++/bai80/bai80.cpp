#include<iostream>
using namespace std;

void Nhap(int n , int a[]);
long long TongMax(int a[] , int n , int b[] , int m);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        int a[10000],b[10000];
        Nhap(n,a);
        Nhap(m,b);
        cout << TongMax(a,n,b,m) << endl;
    }
    return 0;
}
void Nhap(int n , int a[])
{
    for (int i=0;i<n;i++)
        cin >> a[i];
}
long long TongMax(int a[] , int n, int b[] , int m)
{
    long long sum=0;
    int size;
    if (n>m)
    {
        size = n;
        for (int i=m;i<n;i++)
            b[i]=0;
    }
    if (n<m)
    {
        size = m;
        for (int i=n;i<m;i++)
            a[i]=0;
    }
    for (int i=0;i<size;i++)
    {
        if (a[i]>b[i])
            sum+=a[i];
        else
        {
            sum+=b[i];
        }
    }
    return sum;
}