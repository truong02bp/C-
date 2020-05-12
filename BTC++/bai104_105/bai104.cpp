#include<iostream>
#include<vector>

using namespace std;

vector<long long> nhap(long long n);
long long Minn(vector<long long> &a , long long n);
long long Maxx(vector<long long> &a , long long n);
long long Tich(vector<long long> &a , long long n , vector<long long> &b , long long m);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,m;
        cin >> n >> m;
        vector<long long> a,b;
        a = nhap(n);
        b = nhap(m);
        cout << Tich(a,n,b,m) << endl;
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
long long Minn(vector<long long> &a , long long n)
{
    long long min=a[0];
    for (long long i=1;i<n;i++)
        if (a[i] < min)
            min = a[i];
    return min;
}
long long Maxx(vector<long long> &a , long long n)
{
    long long max=a[0];
    for (long long i=1;i<n;i++)
        if (a[i] > max)
            max = a[i];
    return max;
}
long long Tich(vector<long long> &a , long long n , vector<long long> &b , long long m)
{
    long long max = Maxx(a,n) , min = Minn(b,m);
    return (max*min);
}