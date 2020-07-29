#include<iostream>
using namespace std;

string s;
string result()
{
    string rs="";
    rs+=s[0];
    for (int i=1;i<s.length();i++)
        rs+= (s[i]^s[i-1])+'0';
    return rs;    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        cout << result() << endl;
    }
    return 0;
}