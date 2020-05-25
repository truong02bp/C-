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
    stack<int> sta;
    for (int i=s.length();i>=0;i--)
        if (isOperator(s[i]))
        {
            int s1 = sta.top();
            sta.pop();
            int s2 = sta.top();
            sta.pop();
            switch (s[i])
            {
            case '-':
                sta.push(s1-s2);
                break;
            case '+':
                sta.push(s1+s2);
                break;
            case '*':
                sta.push(s1*s2);
                break;
            case '/':
                sta.push(s1/s2);
                break;
            default:
                break;
            }
        }
        else 
        {
            sta.push(s[i]-'0');
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