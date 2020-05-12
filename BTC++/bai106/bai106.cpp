#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<long long> nhap(long long n);
vector<long long> Sort(vector<long long> &a , long long n , vector<long long> &b , long long m);

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
        vector<long long> kq;
        kq = Sort(a,n,b,m);
        for (long long i=0;i<kq.size();i++)
            cout << kq[i] <<" ";
        cout << endl;
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
vector<long long> Sort(vector<long long> &a , long long n , vector<long long> &b , long long m)
{
    vector<long long> kq;
    long long i=0,j=0;
    while (i<n)
    {
        kq.push_back(a[i]);
        i++;
    }
    while (j<n)
    {
        kq.push_back(b[j]);
        j++;
    }
    sort(kq.begin(),kq.end());
    return kq;
}