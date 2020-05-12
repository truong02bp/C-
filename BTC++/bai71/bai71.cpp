#include<iostream>
#include<algorithm>
using namespace std;

long long Resuilt(long long a[], long long n)
{
    long long tong1=a[0],tong2=0;
    for (int i=1;i<n;i++)
    {
        long long temp = max(tong1,tong2);
        tong1= tong2 + a[i];
        tong2 = temp;
    }
    return max(tong1,tong2);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,a[100001];
        cin >> n;
        for (long long i=0;i<n;i++)
            cin >> a[i];
        cout << Resuilt(a,n) << endl;
    }
    return 0;
}