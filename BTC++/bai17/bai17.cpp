#include<iostream>
#include<math.h>
using namespace std;

int TongChuSo(int n);
bool CheckNto(int n);
bool CheckSmith(int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (CheckSmith(n)==true)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}
int TongChuSo(int n)
{
    int sum=0;
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
bool CheckNto(int n)
{
    if (n < 2) return false;
    for (int i=2;i<=sqrt(n);i++)
        if (n%i==0) return false;
    return true;
}
bool CheckSmith(int n)
{
    if (CheckNto(n)==true) return false;
    int i=2,sum=0,k;
    k=n;
    while (n>1)
    {
        while (n%i==0)
        {
            sum+=TongChuSo(i);
            n/=i;
        }
        i++;
    }
    return (sum==TongChuSo(k));
}