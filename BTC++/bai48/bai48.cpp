#include<iostream>
#include<vector>
using namespace std;

long long FindK(long long  a[] , long long n)
{
    long long i;
    for (i=0;i<n-1;i++)
        if (a[i] > a[i+1])
            return i+1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long  *a;
        a = new long long[10000001];
        long long n;
        cin >> n;
        for (long long i=0;i<n;i++)
        {
            cin >> a[i];
        }
        cout << FindK(a,n) << endl;
    }
    return 0;
}