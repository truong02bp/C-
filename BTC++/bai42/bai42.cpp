#include<iostream>
#include<vector>
using namespace std;

bool Check(long long n);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (Check(n)==true)
            cout <<"YES" << endl;
        else
        {   
            cout <<"NO" << endl;
        }
    }
    return 0;
}

bool Check(long long  n)
{
    if (n==0) return true;
    if (n==1) return true;
    vector<long long> a;
    long long i=2;
    a.push_back(0);
    a.push_back(1);
    while (1)
    {
        a.push_back(a[i-1]+a[i-2]);
        if (a[i]==n)
            return true;
        if (a[i] > n)
            return false;
        i++;
    }
}