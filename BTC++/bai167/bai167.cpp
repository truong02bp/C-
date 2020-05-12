#include<iostream>
using namespace std;

bool ChiaHet(string s , int n)
{
    if (s.empty()==true) return false;
    int temp=0;
    for (int i=0;i<s.length();i++)
        temp = (temp*10 + (s[i]-'0'))%n;
    return (temp==0);
}
long long Count(string s , int n)
{
    long long counter=0;
    int a[10001];
    for (int i=0;i<s.length();i++)
        a[i]=0;
    int i=s.length()-1;
    while (i>=0)
    {
        i = s.length()-1;
        while (a[i]==1)
        {
            a[i]=0;
            i--;
        }
        a[i]=1;
        string kq="";
        for (int j=0;j<s.length();j++)
            if (a[j]==1)
                kq+=s[j];
        if (ChiaHet(kq,n)==true)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m,n;
        cin >> m >> n;
        string s;
        cin >> s;
        cout << Count(s,n) << endl;
    }
    return 0;
}