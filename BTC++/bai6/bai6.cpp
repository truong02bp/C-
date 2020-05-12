#include<iostream>
#include<algorithm>
using namespace std;

long long GCD(long long a , long long b);
void Check(long long n,long long m);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,m;
        cin >> n >> m;
        Check(n,m);
        cout << endl;
    }
    return 0;
}
long long GCD(long long a , long long b)
{
    long long temp;
    while (b!=0)
    {
        temp = a%b;
        a=b;
        b=temp;
    }
    return a;
}
void Check(long long n , long long m)
{
    long long sum1,sum2,sum;
    sum = n*(n+1)/2;
    sum1 = (sum+m)/2;
    sum2 = sum - sum1;
    if (abs(sum1-sum2)==m )
    {
        if (GCD(sum1,sum2)==1)
            cout <<"Yes";
        else
            cout <<"No";
    }
    else
    {
        cout <<"No";
    }
}