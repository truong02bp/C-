#include<iostream>
#include<vector>
using namespace std;

vector<long long> nhap(long long n);
long long MAX(vector<long long> &a , long long n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a = nhap(n);
        cout << MAX(a,n) << endl;
    }
    return 0;
}
vector<long long> nhap(long long n)
{
    vector<long long> a;
    for (long long i=0;i<n;i++)
    {
        long long temp;
        cin >> temp;
        a.push_back(temp);
    }
    return a;
}
long long MAX(vector<long long> &a , long long n)
{
    long long max =0;
    for (long long i=0;i<n;i++)
        max+=i*a[i];
    for (long long k=1;k<n;k++)
    {
        long long sum=0;
        for (long long i = k ;i<n;i++)
            sum+=(i-k)*a[i];
        for (long long j=0;j<k;j++)
            sum+=(n-k+j)*a[j];
        if (sum > max)
            max = sum;
    }
    return max;
}