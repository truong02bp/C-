#include<iostream>
#include<vector>
using namespace std;

long long Search(vector<long long> &a , long long n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a;
        for (long long i=0;i<n-1;i++)
        {
            long long temp;
            cin >> temp;
            a.push_back(temp);
        }
        cout << Search(a,n) << endl;
    }
    return 0;
}
long long Search(vector<long long> &a ,long long n)
{
    long long i=1;
    while (i<=n)
    {
        if (i!=a[i-1])
            return i;
        i++;
    }
}