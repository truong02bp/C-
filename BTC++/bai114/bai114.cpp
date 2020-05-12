#include<iostream>
#include<vector>
using namespace std;

long long search_binary(vector<long long> &a , long long left ,long long right , long long x);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a;
        for (long long i=0;i<n;i++)
        {
            long long temp;
            cin >> temp;
            a.push_back(temp);
        }
    }
}
long long search_binary(vector<long long> &a , long long left , long long right , long long x)
{
    if (left > right)
        return -1;
    long long mid =(left+right)/2;
    if (a[mid]==x)
        return mid;
    if (a[mid] < x)
        return search_binary(a,mid+1,right,x);
    
}