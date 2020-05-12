#include<iostream>
#include<vector>
using namespace std;

long long Search(vector<long long> &a ,long long n , long long x)
{
    long long counter=0;
    bool kt = false;
    int i=0;
    while (a[i]!=x)
    {
        i++;
        if (i==n)
            return -1;
    }
    while (a[i]==x)
    {
        kt = true;
        counter++;
        i++;
    }
    return counter;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long x;
        cin >> n >> x;
        vector<long long> a;
        for (int i=0;i<n;i++)
        {
            long long temp;
            cin >> temp;
            a.push_back(temp);
        }
        cout << Search(a,n,x) << endl;
    }
    return 0;
}