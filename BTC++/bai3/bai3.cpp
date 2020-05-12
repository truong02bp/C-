#include<iostream>
#include<fstream>
using namespace std;

#define modulo 1000000007;

long long GCD (long long x , long long y);
long long hx(long long a[] , int n);
long long gx (long long a[] , int n);
long long poww(long long hx , long long gx);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[100];
        for (int i=0;i<n;i++)
            cin >> a[i];
        cout << poww (hx(a,n),gx(a,n)) << endl;
    }
    return 0;
}
long long GCD (long long x , long long y)
{
    long long temp;
    while (y!=0)
    {
        temp = x%y;
        x=y;
        y=temp;
    }
    return x;
}
long long gx(long long a[] , int n)
{
    long long gcd = a[0];
    for (int i=1;i<n;i++)
        gcd = GCD(gcd , a[i]);
    return gcd;
}
long long hx(long long a[] , int n)
{
    long long tich=a[0];
    for (int i=1;i<n;i++)
    {
        tich = ( tich * a[i] )%modulo;
    }
    return tich;
}
long long poww(long long hx , long long gx)
{
    if (gx==1)
        return hx;
    long long t = poww(hx , gx/2);
    t = (t*t)%modulo;
    if (gx%2==1)
        t = (t*hx)%modulo;
    return t;
}