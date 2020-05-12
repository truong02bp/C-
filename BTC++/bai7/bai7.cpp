#include<iostream>
#include<math.h>
using namespace std;

long long GCD(long long a , long long b);
long long LCM(long long a , long long b);
long long BCNN(long long x , long long y , long long z , int n);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long x,y,z;
        cin >> x >> y >> z >> n;
        cout << BCNN(x,y,z,n) << endl;
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
long long LCM(long long a , long long b)
{
    return (a*b)/(GCD(a,b));
}
long long BCNN(long long x , long long y ,long long z , int n)
{
    long long BCNN;
    BCNN = LCM(x,y);
    BCNN = LCM(BCNN,z);
    long long a = pow(10,n-1);
    if (a%BCNN==0)
        return a;
    else
    {
        long long min = (a/BCNN)+1;
        if (BCNN < pow(10,n))
            return min*BCNN;
    }
    return -1;
}