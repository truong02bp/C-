#include<iostream>
using namespace std;

long long modulo(string a, long long m);
long long SoDu(long long temp , long long b , long long m);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        long long b,m;
        cin >> a >> b >> m;
        long long temp = modulo(a,m);
        cout << SoDu(temp,b,m) << endl;
    }
    return 0;
}

long long modulo(string a,long long m)
{
    long long temp=0;
    for (int i=0;i<a.length();i++)
        temp = (temp*10 + (a[i]-'0'))%m;
    return temp;
}
/*long long SoDu(string a , long long b , long long m)
{
    long long A = modulo(a,m);
    long long i,Sodu=1;
    for (i=1;i<=b;i++)
        Sodu=(Sodu*A)%m;
    return Sodu;
}
*/
long long SoDu(long long temp , long long b , long long m)
{
    if (b==1)
        return (temp%m);
    long long t = SoDu(temp,b/2,m);
    t = (t*t)%m;
    if (b%2==1)
        t = (t*temp)%m;
    return t;
}