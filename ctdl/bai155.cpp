#include<bits/stdc++.h>
using namespace std;

string s;
bool isOperator(char c)
{
    if (c=='+' || c=='-' || c=='*' || c=='/')
        return true;
    return false;
}
int tinh(int a,  int b , char c)
{
    if (c=='-')
        return a-b;
    if (c=='+')
        return a+b;
    if (c=='*')
        return a*b;
    if (c=='/')
        return a/b;            
}
void solve()
{
    stack<int> sta;
    for (int i=s.length()-1;i>=0;i--)
        if (isOperator(s[i]))
        {
            int s1 = sta.top();
            sta.pop();
            int s2 = sta.top();
            sta.pop();
            sta.push(tinh(s1,s2,s[i]));
        }
        else 
            sta.push(s[i]-'0');
    cout << sta.top() << endl;       
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