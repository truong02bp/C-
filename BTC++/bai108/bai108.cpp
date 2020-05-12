#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Count(vector<long long> &a , long long n , long long k);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,k;
        cin >> n >> k;
        vector<long long> a;
        for (long long i=0;i<n;i++)
        {
            long long temp;
            cin >> temp;
            a.push_back(temp);
        }
        cout << Count(a,n,k) << endl;
    }
    return 0;
}
int Count(vector<long long> &a , long long n, long long k)
{
    int counter=0;
    sort(a.begin(),a.end());
    for (long long i=0;i<n-1;i++)
    {
        for (long long j=i+1;j<n;j++)
            if (a[j]-a[i] < k)
                counter++;
            else
            {
                break;
            }
    }
    return counter;
}