#include<iostream>
#include<math.h>
using namespace std;

long long Dem(long long b , long long p);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long b,p;
        cin >> b >> p;
        cout << Dem(b,p) << endl;
    }
    return 0;
}

long long Dem(long long b , long long p)
{
    // x^2%p==1 tương tương (x + i*p)^2%p==1
    long long x,counter=0;
    for (x=1;x<p;x++)
    {
        if (x*x%p==1) // x^2 %p == 1
        {
            long long last = x + p*(b/p); // phần tử lớn nhất thuôc [1...b]
            if (last > b)
                last-=p;
            counter+= (last-x)/p + 1;
        }
    }
    return counter;
}