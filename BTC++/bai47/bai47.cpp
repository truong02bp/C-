#include<iostream>
#include<vector>
using namespace std;

void Nhap(long long a[] , long long n)
{
    for (long long i=0;i<n;i++)
        cin >> a[i];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a[100],n,d;
        cin >> n >> d;
        Nhap(a,n);
        long long i=d;
        vector<long long> kq;
        while (i<n)
        {
            kq.push_back(a[i]);
            i++;
        }
        for (long long j=0;j<d;j++)
            kq.push_back(a[j]);
        for (long long j=0;j<kq.size();j++)
            cout << kq[j] <<" ";
        cout << endl;
    }
}