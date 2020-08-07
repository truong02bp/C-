#include<bits/stdc++.h>
using namespace std;

int n;
void solve()
{
    queue<long long> q;
    q.push(9);
    while(q.front()%n!=0)
    {
        int value = q.front();
        q.pop();
        q.push(value*10);
        q.push(value*10+9);
    }
    cout << q.front() << endl;
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