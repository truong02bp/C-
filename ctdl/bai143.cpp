#include<bits/stdc++.h>
using namespace std;

string s;

void solve()
{
    int rs=0;
    stack<int> sta;
    sta.push(-1);
    for (int i=0;i<s.length();i++)
        if (s[i]=='(')
            sta.push(i);
        else 
        {
            sta.pop();
            if (!sta.empty())
                rs = max(rs , i-sta.top());
            else 
                sta.push(i);    
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