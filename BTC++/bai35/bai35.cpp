#include<iostream>
using namespace std;

#define modulo 1000000007;
long long GiaTri(int a[] , int n , int x);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x,a[2001];
        cin >> n >> x;
        for (int i=0;i<n;i++)
            cin >> a[i];
        cout << GiaTri(a,n,x) << endl;
    }
    return 0;
}

long long GiaTri(int a[] , int n , int x)
{
    long long Giatri=0;
    for (int i=0;i<n;i++)
        Giatri = (Giatri*x + a[i])%modulo;
    return Giatri;
}