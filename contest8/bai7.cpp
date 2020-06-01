#include<iostream>
#include<queue>
using namespace std;

typedef long long ll;
ll n;

void result()
{
    ll rs = 0;
    queue<ll> a;
    a.push(1);
    while (a.front() <= n)
    {
        rs++;
        ll temp = a.front();
        a.pop();
        a.push(temp*10);
        a.push(temp*10+1);
    }
    cout << rs << endl;
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