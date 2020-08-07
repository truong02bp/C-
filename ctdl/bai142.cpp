#include<bits/stdc++.h>
using namespace std;

string s;

bool solve()
{
    stack<char> sta;
    for (int i=0;i<s.length();i++)
        if (s[i]=='[' || s[i]=='{' || s[i]=='(')
            sta.push(s[i]);
        else 
        {
            if (sta.empty())
                return false;
            char value = sta.top();
            if (s[i]==')' && value!='(')
                return false;
            if (s[i]=='}' && value!='{')
                return false;    
            if (s[i]==']' && value!='[')
                return false;    
            sta.pop();    
        }    
    return true;    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> s;
        if (solve())
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;    
    }
    return 0;
}