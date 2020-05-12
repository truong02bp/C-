#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

string Tich(string number1 , string number2);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string number1,number2;
        cin >> number1 >> number2;
        cout << Tich(number1,number2) << endl;
    }
    return 0;
}
string Tich(string number1 , string number2)
{
    int a[number1.size()+number2.size()];
    int i,j;
    for (i=0;i<number1.size()+number2.size();i++)
        a[i]=0;
    for (i=number1.size()-1;i>=0;i--)
        for (j=number2.size()-1;j>=0;j--)
            a[i+j+1]+= (number1[i]-'0')*(number2[j]-'0');
    for (i=number1.size()+number2.size()-1;i>=0;i--)
        if (a[i]>9)
        {
            a[i-1]+=a[i]/10;
            a[i]%=10;
        }
    string Tich="";
    if (a[0]!=0)
        for (i=0;i<number1.size()+number2.size();i++)
             Tich+='0'+a[i];
    else
    {
        for (i=1;i<number1.size()+number2.size();i++)
             Tich+='0'+a[i];
    }
    
    return Tich;
}