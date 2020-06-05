#include<iostream>
#include<queue>
using namespace std;

int l,r;
bool so[100005];

bool check(int n)
{
    priority_queue<int> a;
    while (n>0)
    {
        a.push(n%10);
        n/=10;
    }
    if (!a.empty() && a.top() > 5)
        return false;
    while (!a.empty())
    {
        int t  = a.top();
        a.pop();
        if (!a.empty() && a.top() == t)
            return false;
    }
    return true;
}

void result()
{
    for (int i=0;i<=100000;i++)
        if (check(i)==true)
            so[i] = true;
}

int main()
{
    int t;
    cin >> t;
    result();
    while (t--)
    {
        int rs=0;
        cin >> l >> r;
        for (int i=l;i<=r;i++)
            if (so[i]==true)
                rs++;
        cout << rs << endl;
    }
    return 0;
}