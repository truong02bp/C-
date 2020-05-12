#include<iostream>
#include<math.h>
using namespace std;

void Display(long long n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        Display(n);
        cout << endl;
    }
    return 0;
}

void Display(long long n)
{
    long long b = sqrt(n) +1;
    long long i=2;
    while (i<=b)
    {
        while (n%i==0)
        {
            cout << i <<" ";
            n/=i;
        }
        i++;
    }
    if (n>1)
        cout << n;
}