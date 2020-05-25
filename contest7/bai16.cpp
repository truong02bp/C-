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
    for (int i=0;i<s.length();i++)
        if (isOperator(s[i]))
        {
            int s1 = sta.top();
            sta.pop();
            int s2 = sta.top();
            sta.pop();
            switch (s[i])
            {
            case '-':
                sta.push(s2-s1);
                break;
            case '+':
                sta.push(s2+s1);
                break;
            case '*':
                sta.push(s2*s1);
                break;
            case '/':
                sta.push(s2/s1);
                break;
            default:
                break;
            }
        }
        else 
        {
            int temp = s[i]-'0';
            sta.push(temp);
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