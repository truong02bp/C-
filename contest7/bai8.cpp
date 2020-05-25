#include<iostream>
#include<stack>
using namespace std;

string s;

void result()
{
    stack<int> sta;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]=='(')
            sta.push(i);
        else 
            if (s[i]==')')
            {
                int index = sta.top();
                sta.pop();
                if (index!=0)
                {
                    if (s[index-1]=='-')
                        for (int j=index+1;j<i;j++)
                        {
                            if (s[j]=='+')
                                s[j]='-';
                            else 
                                if (s[j]=='-')
                                    s[j]='+';
                        }
                }
                s.erase(s.begin()+i);
                s.erase(s.begin()+index);
                i-=2;
            }
    }
    cout << s << endl;
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