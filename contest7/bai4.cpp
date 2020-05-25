#include<iostream>
#include<stack>
using namespace std;

string s;

void result()
{
    stack<char> sta;
    int kt=0;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]=='{' || s[i]=='(' || s[i]=='[')
            sta.push(s[i]);
        else 
        {
            if (sta.empty())
                kt=1;
            else 
            {
                char temp = sta.top();
                if (s[i]==')' && temp!='(')
                    kt=1;
                else 
                    if (s[i]=='}' && temp!='{')
                        kt=1;
                    else 
                        if (s[i]==']' && temp!='[')
                        kt=1;
            }
            if (kt==1)
                break;
            sta.pop();
        }
    }
    if (kt==0)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        result();
    }
}