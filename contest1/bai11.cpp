#include<iostream>
using namespace std;

string result(string s)
{
    string rs="";
    rs+=s[0];
    for (int i=1;i<s.length();i++)
    {
        if (s[i]=='0')
            rs+=rs[i-1];
        else
        {
            if (rs[i-1]=='0')
                rs+='1';
            else
                rs+='0';
        }
    }
    return rs;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << result(s) << endl;
    }
    return 0;
}