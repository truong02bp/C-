#include<iostream>
#include<queue>
using namespace std;

int n;

void result()
{
    queue<string> a;
    a.push("1");
    while (n--)
    {
        string s1 = a.front();
        a.pop();
        cout << s1 << " ";
        string s2 = s1;
        a.push(s1+"0");
        a.push(s2+"1");
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        result();
    }
    return 0;
}