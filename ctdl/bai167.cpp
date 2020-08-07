#include<bits/stdc++.h>
using namespace std;

int n;  
void solve()
{
    queue<string> q;
    q.push("1");
    while(n--)
    {
        cout << q.front() <<" ";
        string s1 = q.front();
        q.pop();
        q.push(s1+"0");
        q.push(s1+"1");
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        solve();
    }
    return 0;
}