#include<iostream>
using namespace std;

long long TongSoDu(int n , long long k);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long k;
        int n;
        cin >> n >> k;
        cout << TongSoDu(n,k) << endl;
    }
    return 0;
}

long long TongSoDu(int n , long long k)
{
    int sum=0,sum1,sum2,x,y;
    x = n/k;
    y = n%k;
    sum1 = (k*(k-1))/2; // tong tu 1 den k-1
    sum2 = (y*(y+1))/2; // tong tu 1 den n%k
    sum = x*sum1 + sum2;
    return (sum==k);
}