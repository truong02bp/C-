#include<iostream>
#include<math.h>
using namespace std;

int Check(long long n)
{
    int a[8]={2,3,5,7,13,17,19,31};
    for (int i=0;i<8;i++)
    {
        if (n==pow(2,a[i]-1)*(pow(2,a[i])-1))
            return 1;
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << Check(n) << endl;
    }
    return 0;
}

