#include<iostream>
#include<queue>
using namespace std;

int n;

void result()
{
    queue<long long> a;
    a.push(9);
    while (a.front()%n!=0)
    {
        long long temp = a.front();
        a.pop();
        a.push(temp*10);
        a.push(temp*10+9);
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