#include<iostream>
#include<stack>
using namespace std;

string s;

bool isOperator(char c)
{
    if (c=='-' || c=='+' || c=='*' || c=='/')
        return true;
    return false;
}

void result()
{
    stack<string> sta;
    for (int i=s.length()-1;i>=0;i--)
    {
        if (isOperator(s[i]))
        {
            string s1 = sta.top();
            sta.pop();
            string s2 = sta.top();
            sta.pop();
            string temp="";
            temp+=s1+s2+s[i];
            sta.push(temp);
        }
        else 
        {
            string temp="";
            temp+=s[i];
            sta.push(temp);
        }
    }
    cout << sta.top() << endl;
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