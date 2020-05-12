#include<iostream>
using namespace std;

long long SoDu(long long x , long long y , long long p);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x,y,p;
        cin >> x >> y >> p;
        cout << SoDu(x,y,p) << endl;
    }
    return 0;
}

long long SoDu(long long x , long long y , long long p)
{
    long long SoDu=1,i;
    for (i=1;i<=y;i++)
        SoDu = (SoDu*x)%p;
    return SoDu;
}