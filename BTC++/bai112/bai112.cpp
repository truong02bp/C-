#include<iostream>
#include<vector>
using namespace std;

long long SearchBinary(vector<long long> &a , long long left , long long right , long long x)
{
    if (left > right)
        return -1;
    long long mid = (left+right)/2;
    if (a[mid]==x)
        return mid+1;
    if (a[mid] < x)
        return SearchBinary(a,mid+1,right,x);
    else
    {
        return SearchBinary(a,left,mid+1,x);
    }   
    
}
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
        cout << SearchBinary(a,0,n-1,x) << endl;
    }
    return 0;
}