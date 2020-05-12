#include<iostream>
using namespace std;

long long TongSoDu(int n, long long k);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        cout << TongSoDu(n,k) << endl;
    }
    return 0;
}

long long TongSoDu(int n, long long k)
{
    int sum=0,sum1,sum2,sl,x;
    sl = n/k; // so lan chia het cho k
    sum1 = (k*(k-1))/2; // tong tu 1 den k-1
    x = n%k;
    sum2 = (x*(x+1))/2; // tong tu 1 den n%k
    sum = sl * sum1 + sum2;
    return sum;
}