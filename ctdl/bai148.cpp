#include<bits/stdc++.h>
using namespace std;

string p1,p2;

string solve(string s)
{
    stack<int> sta;
    for (int i=0;i<s.length();i++)
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
    return s;    
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> p1 >> p2;
        p1 = solve(p1);
        p2 = solve(p2);
        if (p1==p2)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;    
    }
    return 0;
}