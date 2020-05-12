#include<iostream>
#include<vector>
using namespace std;

long long Minn(vector<long long> &a , long long n , long long x);

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
        cout << Minn(a,n,x) << endl;
    }
    return 0;
}
long long Minn(vector<long long> &a , long long n , long long x)
{
    long long min=n,sum,counter,kt=0;
    for (long long i=0;i<n;i++)
    {
        sum = a[i];
        counter=1;
        for (long long j=i+1;j<n;j++)
        {
            if (sum > x)
            {
                if (counter < min)
                    min = counter;
                kt=1;
            }
            sum+=a[j];
            counter++;
        }
        if (sum > x)
            {
                if (counter < min)
                    min = counter;
                kt=1;
            }
    }
    if (kt==0) return -1;
    return min;
}