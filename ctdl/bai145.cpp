#include<bits/stdc++.h>
using namespace std;

string s;
void solve()
{
    stack<char> sta;
    for (int i=0;i<s.length();i++)
        if (s[i]=='(')
            sta.push(s[i]);
        else 
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
    int rs = sta.size(),cnt=0;
    while (!sta.empty()) 
    {
        if (sta.top()==')')
            cnt++;
        sta.pop();    
    }   
    cout << rs/2 + cnt%2 << endl;
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