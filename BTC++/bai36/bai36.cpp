#include<iostream>
using namespace std;

long long Modulo(long long a , long long b, long long c);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        cout << Modulo(a,b,c) << endl;
    }
    return 0;
}
// dùng đệ quy
long long Modulo(long long a , long long b, long long c)
{
    if (b==0)
        return 0;
    if (b==1)
        return a%c;
    long long temp = Modulo(a,b/2,c);
    temp = (temp + temp)%c;
    if (b%2==1)
        temp = (temp+a)%c;
    return temp;
}