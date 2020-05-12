#include<iostream>
#include<vector>
using namespace std;

long long TimKiem(vector<long long> &a , long long n , long long x);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,x;
        cin >> n >> x;
        vector<long long> a;
        for (long long i=0;i<n;i++)
        {
            long long temp;
            cin >> temp;
            a.push_back(temp);
        }
        cout << TimKiem(a,n,x) << endl;
    }
    return 0;
}
long long TimKiem(vector<long long> &a , long long n , long long x)
{
    for (long long i=0;i<n;i++)
        if (a[i]==x)
            return i+1;
    return -1;
}