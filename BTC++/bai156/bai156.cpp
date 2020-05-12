#include<iostream>
using namespace std;

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
string Sum(string str)
{
    string sum="0";
    int i=0;
    while (i<str.length())
    {
        if ((str[i]-'0')>=0 && (str[i]-'0') <=9)
        {
            string temp="";
            temp+=str[i];
            int j=i+1;
            while ((str[j]-'0')>=0 && (str[j]-'0')<=9 && j<str.length())
            {
                temp+=str[j];
                j++;
            }
            i+=temp.length();
            sum = Tong(sum,temp);
        }
        else
        {
            i++;
        }
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        cout << Sum(str) << endl;
    }
    return 0;
}