#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long Max(vector<long long> &a , long long n)
{
    long long Sum=0,amMax=-9999999;
    long long sumDuong=0;
    long long temp=0,ktd=1,kta=1;
    for (long long i=0;i<n;i++)
    {
        temp+=a[i];
        if (temp < 0)
            temp=0;
        else
        {
            Sum = max(Sum,temp);
        }
        if (a[i]>=0)
        {
            kta=0;
            sumDuong+=a[i];
        }
        else
        {
            ktd=0;
            if (a[i] > amMax)
                amMax=a[i];
        }
    }
    if (kta==1)
        return amMax;
    if (ktd==1)
        return sumDuong;
    return Sum;
}

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
        cout << Max(a,n) << endl;
    }
    return 0;
}