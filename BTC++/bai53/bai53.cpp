#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<long long> nhap(long long n);
long long Try(vector<long long> &a , long long n , long long k);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n , k;
        cin >> n >> k;
        vector<long long> a;
        a = nhap(n);
        cout << Try(a,n,k) << endl;
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
long long Try(vector<long long> &a , long long n , long long k)
{
    long long count=0;
    for (long long i=0;i<n;i++) // Tìm số phần tử nhỏ hơn hoặc bằng k
        if (a[i] <=k )
            count++;
    int temp=0;
    for (int i=0;i<count;i++) // tìm số phần tử lớn hơn k từ vị trí 0 đến count-1
        if (a[i] > k)
            temp++;
    int ans=temp;
    for (int i=count;i<n;i++)
    {
        if (a[i-count] > k) 
            temp--;
        if (a[i] > k)
            temp++;
        ans = min(ans,temp);
    }
    return ans;
}