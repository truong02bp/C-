#include<iostream>
#include<stack>
using namespace std;

string s;

void result()
{
    stack<char> sta;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]==')')
        {
            if (sta.empty())
                sta.push(s[i]);
            else 
            {
                if (sta.top()=='(')
                    sta.pop();
                else 
                    sta.push(s[i]);
            }
        }
        else 
            sta.push(s[i]);
    }
    int rs = sta.size(),cnt=0;
    while (!sta.empty())
    {
        if (sta.top()==')')
            cnt++;
        sta.pop();
    } 
    rs = rs/2 + cnt%2;
    cout << rs << endl;
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
    return 0;
}