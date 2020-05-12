#include<iostream>
using namespace std;


string Resuilt(string s)
{
    char temp='1';
    string kq;
    int i=0;
    while (i<s.length())
    {
        int t=i;
        while (s[i]=='D')
        {
            temp++;
            i++;
        }
        kq[i]=temp+1;
        for (int j=t;j<i;j++)
            kq[i]=temp--;
    }
    return kq;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << Resuilt(s) << endl;
    }
    return 0;
}