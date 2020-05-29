#include<iostream>
#include<stack>
using namespace std;

string s;

void result()
{
    string rs = "";
    stack<int> sta;
    int cnt=0;
    for (int i=0;i<=s.length();i++)
    {
        if (s[i]=='I' || i==s.length())
        {
            cout << i+1;
            while(!sta.empty())
            {
                cout << sta.top();
                sta.pop();
            }
        }
        else 
            sta.push(i+1);
    }
    cout << endl;
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