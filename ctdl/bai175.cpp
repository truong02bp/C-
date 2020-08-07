#include<bits/stdc++.h>
using namespace std;

int l,r;
bool check(int n)
{
    priority_queue<int> q;
    while (n>0)
    {
        q.push(n%10);
        n/=10;
    }
    if (!q.empty() && q.top()>5)
        return false;
    while (!q.empty())
    {
        int t = q.top();
        q.pop();
        if (!q.empty() && t==q.top())
            return false;
    }    
    return true;
}
void solve()
{
    int rs=0;
    for(int i=l;i<=r;i++)
        if (check(i))
            rs++;
    cout << rs << endl;        
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> l >> r;
        solve();
    }
    return 0;
}