#include<iostream>
#include<string.h>
using namespace std;

string Hieu(string x, string y)
{
    if (x.length() < y.length())
        swap(x,y);
    else
    {
        if (x.length()==y.length())
            for (int i=0;i<x.length();i++)
            {
                if (x[i]-y[i]>0)
                    break;
                if (x[i]-y[i]<0)
                {
                    swap(x,y);
                    break;
                }
            }
    }
    int lx=x.length(),ly=y.length();
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
    for (int i=0;i<lx;i++)
        kq+=c[i]+'0';
    return kq;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x,y;
        cin >> x >> y;
        cout << Hieu(x,y) << endl;
    }
    return 0;
}