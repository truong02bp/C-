#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n , k;
        cin >> n >> k;
        vector<long long> a;
        for (long long i=0;i<n;i++)
        {
            long long temp;
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        cout << a[k-1] << endl;
    }
    return 0;
}