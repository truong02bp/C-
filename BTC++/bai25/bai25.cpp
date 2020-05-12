#include<iostream>
using namespace std;

int DemSo(int a , int b ,long long m , long long n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        long long m,n;
        cin >> m >> n >> a >> b;
        cout << DemSo(a,b,m,n) << endl;
    }
    return 0;
}

int DemSo(int a , int b , long long m , long long n)
{
    int sum=0;
    long long i=m;
    while (i<=n)
    {
        if (i%a==0 || i%b==0)
            sum++;
        i++;
    }
    return sum;
}

