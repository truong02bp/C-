#include<iostream>
#include<queue>
using namespace std;

typedef long long ll;
int n;  

void result()
{
    queue<ll> a;
    a.push(1);
    while (a.front()%n!=0)
    {
        ll temp = a.front();
        a.pop();
        a.push(temp*10);
        a.push(temp*10+1);
    }
    cout << a.front() << endl;
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