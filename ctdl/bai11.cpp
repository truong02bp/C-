#include<iostream>
using namespace std;

string s;
string result()
{
    string rs = "";
    rs+=s[0];
    for (int i=1;i<s.length();i++)
        if (s[i]=='0')
            rs+=rs[i-1];
        else 
            if (rs[i-1]=='1')    
                rs+='0';
            else 
                rs+='1';    
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