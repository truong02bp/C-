#include<bits/stdc++.h>
using namespace std;

long long n;
void solve()
{
    queue<long long> q;
    q.push(1);
    while(q.front()%n!=0)
    {
        long long value = q.front();
        q.pop();
        q.push(value*10);
        q.push(value*10+1);
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