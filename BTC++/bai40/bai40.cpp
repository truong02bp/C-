#include<iostream>
#include<vector>
using namespace std;

string Hieu(string x , string y);
string Chia(string x , string y);
string Tong(string x , string y);
bool SoSanh(string x , string y);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x,y;
        cin >> x >> y;
        cout << Chia(x,y) << endl;
    }
    return 0;
}
string Tong(string x , string y)
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
string Hieu(string x, string y)
{
    int lx = x.length(),ly=y.length();
    y.insert(0,lx-ly,'0');
    char c[1000];
    int nho=0;
    for (int i=lx-1;i>=0;i--)
    {
        c[i]=x[i]-y[i]-nho;
        if (c[i]<0)
        {
            nho=1;
            c[i]+=10;
        }
        else
        {
            nho=0;
        }
    }
    string kq="";
    int vitri,kt=1;
    for (int i=0;i<lx;i++)
        if (c[i]!=0)
        {
            kt=0;
            vitri=i;
            break;
        }
    if (kt==1)
        return "0";
    for (int j=vitri;j<lx;j++)
        kq+=c[j]+'0';
    return kq;
}
bool SoSanh(string x , string y)
{
    if (x.length() > y.length())
        return true;
    if (x.length() < y.length())
        return false;
    for (int i=0;i<x.length();i++)
    {
        if (x[i]-y[i]>0)
            return true;
        if (x[i]-y[i]<0)
            return false;
    }
    return true;
}
string Chia(string x , string y)
{
    if (SoSanh(x,y)==false)
         return "0";
    vector<string> c;
    c.push_back(y);
    for (int i=1;i<=9;i++)
        c.push_back(Tong(c[i-1],y));
    string temp="";
    string t="";
    for (int i=0;i<x.length();i++)
    {
        if (temp=="0")
            temp="";
        temp+=x[i];
        int a=0;
        if (SoSanh(temp,y)==true)
        {
            for (int i=1;i<c.size();i++)
                if (SoSanh(temp,c[i])==false)
                {
                    temp = Hieu(temp,c[i-1]);
                    a = i;
                    break;
                }
        }
        t+=a+'0';
    }
    string kq="";
    for (int i=0;i<t.length();i++)
        if (t[i]!='0')
        {
            for (int j=i;j<t.length();j++)
                kq+=t[j];
            break;
        }
    return kq;

}