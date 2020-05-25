#include<iostream>
#include<stack>
using namespace std;

string s1 , s2;

string solve(string s)
{
    stack<int> sta;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]=='(')
            sta.push(i);
        else 
        {
            if (s[i]==')')
            {
                int index = sta.top();
                sta.pop();
                if (index!=0)
                {
                    if (s[index-1]=='-')
                    {
                        for (int j=index+1;j<i;j++)
                        {
                            if (s[j]=='-')
                                s[j] = '+';
                            else 
                                if (s[j]=='+')
                                    s[j] = '-';
                        }
                    }
                }
                s.erase(s.begin()+i);
                s.erase(s.begin()+index);
                i-=2;
            }
        }
    }
    return s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s1 >> s2;
        s1 = solve(s1);
        s2 = solve(s2);
        if (s1==s2)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}