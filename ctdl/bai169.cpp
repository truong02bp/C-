#include<bits/stdc++.h>
using namespace std;

long long n;
void solve()
{
    long long rs=0;
    queue<long long> q;
    q.push(1);
    while(q.front() <= n)
    {
        rs++;
        long long value = q.front();
        q.pop();
        q.push(value*10);
        q.push(value*10+1);
    }
    cout << rs << endl;
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