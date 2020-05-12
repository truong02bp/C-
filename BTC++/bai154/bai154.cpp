#include<iostream>
#include<string>
using namespace std;

string Tong(string x1 , string x2);
string TongMin(string x1 , string x2);
string TongMax(string x1 , string x2);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x1,x2;
        cin >> x1 >> x2;
        cout << TongMin(x1,x2) <<" "<< TongMax(x1,x2) << endl;
    }
    return 0;
}
string Tong(string x1 , string x2)
{
    if (x1.length()>x2.length())
    {
        x2.insert(0,x1.length()-x2.length(),'0');
    }
    else
    {
        x1.insert(0,x2.length()-x1.length(),'0');
    }
    int temp=0,nho=0;
    string sum="";
    for (int i=x1.length()-1;i>=0;i--)
    {
        temp = (x1[i]-'0')+ (x2[i]-'0') + nho;
        if (temp >=10)
        {
            temp-=10;
            nho=1;
        }
        else
        {
            nho=0;
        }
        char c = '0'+temp;
        sum.insert(0,1,c);
    }
    if (nho==1)
        sum.insert(0,1,'1');
    return sum;
}
string TongMin(string x1 , string x2)
{
    for (int i=0;i<x1.length();i++)
        if (x1[i]=='6')
            x1[i]='5';
    for (int i=0;i<x2.length();i++)
        if (x2[i]=='6')
            x2[i]='5';
    return Tong(x1,x2);
}
string TongMax(string x1 , string x2)
{
    for (int i=0;i<x1.length();i++)
        if (x1[i]=='5')
            x1[i]='6';
    for (int i=0;i<x2.length();i++)
        if (x2[i]=='5')
            x2[i]='6';
    return Tong(x1,x2);
}
