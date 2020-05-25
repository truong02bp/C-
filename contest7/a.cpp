#include<iostream>
#include<stack>
#include<vector>
using namespace std;

string s;
vector<int> so;
int priority(char c)
{
    if (c=='-' || c=='+')
        return 1;
    if (c=='*' || c=='/')
        return 2;
    return 0;
}

bool isOperator(char c)
{
    if (c=='+' || c=='-' || c=='/' || c=='*')
        return true;
    return false;
}

int toNumber(string a)
{
    int rs=0;
    for (int i=0;i<a.length();i++)
        rs = rs * 10 + (a[i]-'0');
    return rs;
}

string toPostfix()
{
    string rs="";
    stack<char> sta;
    for (int i=0;i<s.length();i++)
    {
        string temp="";
        while (s[i]>='0' && s[i] <='9')
        {
            temp+=s[i];
            i++;
        }
        if (temp!="")
        {
            rs+='1';
            so.push_back(toNumber(temp)); 
        }
        if (i == s.length())
            break;
        if (s[i]=='(')
            sta.push(s[i]);
        else 
        {
            if (s[i]==')')
            {
                while (!sta.empty() && sta.top()!='(')
                {
                    rs+=sta.top();
                    sta.pop();
                }
                if (!sta.empty() && sta.top()=='(')
                    sta.pop();
            }
            else 
            {
                while (!sta.empty() && priority(s[i]) <= priority(sta.top()))
                {
                    rs+=sta.top();
                    sta.pop();
                }
                if (s[i]!='\0')
                    sta.push(s[i]);
            }
        }
    }
    while (!sta.empty() && sta.top()!='(')
    {
        rs+=sta.top();
        sta.pop();
    }
    return rs;
}

void result()
{
    so.clear();
    s = toPostfix();
    stack<long long> sta;
    int j=0;
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
            sta.push(so[j]);
            j++;
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