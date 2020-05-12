#include<iostream>
#include<vector>
using namespace std;

long long SearchBinary(vector<long long> &a , long long left , long long right);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<long long> a;
        long long n;
        cin >> n;
        for (long long i=0;i<n;i++)
        {
            long long temp;
            cin >> temp;
            a.push_back(temp);
        }
        cout << SearchBinary(a,0,n-1) << endl;
    }
    return 0;
}
long long SearchBinary(vector<long long> &a , long long left , long long right)
{
    if (a[right] > a[left])
        return a[left];
    long long mid = (left + right)/2;
    if (a[mid]>a[mid+1])
        return a[mid+1];
    if (a[mid] < a[mid-1])
        return a[mid];
    if (a[mid] > a[left] )
        return SearchBinary(a,mid+1,right);
    if (a[mid] < a[left])
        return SearchBinary(a,left,mid-1);
}