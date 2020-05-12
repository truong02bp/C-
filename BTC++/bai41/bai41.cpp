#include<iostream>
#include<math.h>
using namespace std;

#define modulo 1000000007;
long long Fibo(int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << Fibo(n) << endl;
    }
    return 0;
}

long long Fibo(int n)
{
    if (n<=2) return 1;
    long long a[1001];
    a[0]=0,a[1]=1;
/*    long long f0=0,f1=1,fn;
    while (n>=2)
    {
        fn=(f0+f1)%modulo;
        f0=f1;
        f1=fn;
        n--;
    }
*/
    for (int i=2;i<=n;i++)
    {
        a[i]=(a[i-1]+a[i-2])%modulo;
    }
    return a[n];
}