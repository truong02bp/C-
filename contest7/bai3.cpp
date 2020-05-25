#include<iostream>
#include<stack>
using namespace std;

string s;

void result()
{
    int i=0;
    stack<char> sta;
    while (i<s.length())
    {
        while (i<s.length() && s[i]!=' ')
        {
            sta.push(s[i]);
            i++;
        }
        while (!sta.empty())
        {
            cout << sta.top();
            sta.pop();
        }
        cout << " ";
        i++;
    }
    cout << endl;
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