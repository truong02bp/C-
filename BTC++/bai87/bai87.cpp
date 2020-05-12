#include<iostream>
#include<vector>
using namespace std;

long long SumMax(vector<long long> &a , int x[] , long long n);
bool CheckDayTang(vector<long long> &a , int x[] , long long n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a;
        int *x;
        x = new int[10000001];  // cấu hình dãy con là 1 xâu nhị phân : 1 là có xuất hiện , 0 là không xuất hiện
        for (int i=0;i<n;i++)
        {
            long long temp;
            cin >> temp;
            a.push_back(temp);
            x[i]=0;
        }
        cout << SumMax(a,x,n) << endl;
    }
    return 0;
}
bool CheckDayTang(vector<long long> &a , int x[], long long n)
{
    long long temp=0;
    for (long long i=0;i<n;i++)
        if (x[i]==1)
        {
            if (a[i] <= temp)
                return false;
            temp = a[i];
        }
    return true;
}
long long SumMax(vector<long long> &a , int x[] , long long n)
{
    long long i=n-1;
    long long max=a[0];
    while (i>=0)
    {
        i = n-1;
        while (x[i]==1)
        {
            x[i]=0;
            i--;
        }
        x[i]=1;
        if (CheckDayTang(a,x,n)==true)
        {
            long long sum=0;
            for (long long j=0;j<n;j++)
                if (x[j]==1)
                    sum+=a[j];
            if (sum > max)
                max = sum;
        }
    }
    return max;
}