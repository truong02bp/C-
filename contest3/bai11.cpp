#include<iostream>
#include<queue>
#include<vector>
using namespace std;

typedef long long ll;
#define modulo 1000000007;
priority_queue<ll, vector<ll> , greater<ll> > a;

int n;

void result()
{
    ll sum=0;
    while (a.size()>1)
    {
        ll x = a.top();
        a.pop();
        ll y = a.top();
        a.pop();
        ll temp = (x + y)%modulo;
        a.push(temp);
        sum+=temp;
        sum%=modulo;    
    }
    a.pop();
    cout << sum << endl;
}

int main()
{
    cin >> n;
    for (int i=0;i<n;i++)
    {
        ll temp;
        cin >> temp;
        a.push(temp);
    }
    result();
    return 0;
}


