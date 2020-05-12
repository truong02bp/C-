#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string Tong(string x , string y);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string number1,number2;
        cin >> number1 >> number2;
        cout << Tong(number1,number2) << endl;
    }
    return 0;
}

string  Tong(string x , string y)
{
    if (x.length() > y.length())
        y.insert(0,x.length()-y.length(),'0');
    else
    {
        if (x.length() < y.length())
            x.insert(0,y.length()-x.length(),'0');
    }
    int nho=0,temp;
    string kq="";
    for (int i=x.length()-1;i>=0;i--)
    {
        temp = (x[i]-'0') + (y[i]-'0') + nho;
        if (temp >= 10)
        {
            nho=1;
            temp-=10;
        }
        else
        {
            nho=0;
        }
        kq.insert(0,1,temp+'0');
    }
    if (nho==1)
        kq.insert(0,1,'1');
    return kq;
}