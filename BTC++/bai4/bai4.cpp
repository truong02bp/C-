#include<iostream>
#include<fstream>
using namespace std;

long long ChuyenDoi(int a , string b);
int GCD(int a, long long b);

int main()
{
    ifstream in("input4.txt",ios::in);
    ofstream out("output4.txt",ios::out);
    int t;
    in >> t;
    while (t--)
    {
        long a;
        string b;
        in >> a >> b;
        out << GCD(a,ChuyenDoi(a,b)) << endl;
    }
    return 0;
}

long long ChuyenDoi(long a , string b)
{
    int du=0;
    for (int i=0;i<b.length();i++)
        du =(du*10 + (b[i]-'0'))%a;
    return du;
}
int GCD(long a, long long b)
{
    int temp;
    while (b!=0)
    {
        temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}