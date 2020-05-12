#include<iostream>
using namespace std;

string result(string x)
{
    int n = x.length()-1;
    while (x[n]=='1')
    {   
        x[n]='0';
        n--;
    }
    if (n>=0)
        x[n]='1';
    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        cout << result(x) << endl;
    }
    return 0;
}