#include<iostream>
using namespace std;

string Sinh(string a , long long n);
string UCLN(string a , long long x , long long y);
long long GCD(long long x ,long long y);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        long long x,y;
        cin >> a >> x >> y;
        cout << UCLN(a,x,y) << endl;
    }
    return 0;
}
string Sinh(string a , long long n)
{
    string str="";
    for (int i=0;i<n;i++)
        str+=a;
    return str;
}
long long GCD(long long x ,long long y)
{
    int temp;
    while (y!=0)
    {
        temp = x%y;
        x=y;
        y=temp;
    }
    return x;
}
string UCLN(string a , long long x , long long y)
{
    return Sinh(a,GCD(x,y));
}

