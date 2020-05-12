#include<iostream>
//#include<fstream>
using namespace std;

long long GCD(long long a , long long b);
long long LCM(long long a , long long b);

int main()
{
//    ifstream in("input1.txt");
//    ofstream out("output1.txt");
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b;
        cin >> a >> b;
        cout << LCM(a,b) << " " << GCD(a,b) << endl;
    }
    return 0;
}
long long GCD(long long a , long long b)
{
    long long temp;
    while (b!=0)
    {
        temp = a%b;
        a = b;
        b= temp;
    }
    return a;
}
long long LCM(long long a , long long b)
{
    return (a*b)/(GCD(a,b));
}
