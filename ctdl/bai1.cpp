#include<iostream>
using namespace std;

string x;

void result()
{
    int i = x.length()-1;
    while (x[i]=='1')
    {
        x[i] = '0';
        i--;
    }
    if (i>=0)
        x[i]='1';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> x;
        result();
        cout << x << endl;
    }
    return 0;
}