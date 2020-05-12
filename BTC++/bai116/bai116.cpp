#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long Sum(vector<long long> &a , int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a;
        for (int i=0;i<n;i++)
        {
            long long temp;
            cin >> temp;
            a.push_back(temp);
        }
        cout << Sum(a,n) << endl;
    }
    return 0;
}

long long Sum(vector<long long> &a , int n)
{
    long long min=-9999999999,sum;
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            sum=a[i]+a[j];
            if (abs(sum-0) < abs(min-0))
                min=sum;
        }
    }
    return min;
}