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
        if (s[i]==')')
        {
            bool check = false;
            while (sta.top()!='(')
            {
                char temp = sta.top();
                sta.pop();
                if (temp=='+' || temp=='-' || temp=='*' || temp=='/')
                    check = true;
            }
            sta.pop();
            if (check==false)
            {
                kt=1;
                break;
            }
        }
        else 
            sta.push(s[i]);
    }
    if (kt==1)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getline(cin,s);
        result();
    }
    return 0;
}