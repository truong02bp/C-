#include<bits/stdc++.h>
using namespace std;

string s;

int priority(char c)
{
    if (c=='-' || c=='+')
        return 1;
    if (c=='/' || c=='*')
        return 2;
    if (c=='^')
        return 3;
    return 0;            
}

void solve()
{
    string rs="";
    stack<char> sta;
    for (int i=0;i<s.length();i++)
        if ((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
            rs+=s[i];
        else 
        {
            if (s[i]=='(')
                sta.push(s[i]);
            else 
            {
                if (s[i]==')')
                {
                    while(!sta.empty() && sta.top()!='(')
                    {
                        rs+=sta.top();
                        sta.pop();
                    }
                    if (!sta.empty() && sta.top()=='(')
                        sta.pop();
                }
                else 
                {
                    while(!sta.empty() && priority(s[i]) <= priority(sta.top()))
                    {
                        rs+=sta.top();
                        sta.pop();
                    }
                    sta.push(s[i]);
                }
            }    
        }    
        while(!sta.empty() && sta.top()!='(')
        {
            rs+=sta.top();
            sta.pop();
        }
        cout << rs << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> s;
        solve();
    }
    return 0;
}