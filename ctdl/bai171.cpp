#include<bits/stdc++.h>
using namespace std;

long long n,s;

struct so
{
    long long value;
    long long cnt;
};

long long solve()
{
    queue<so> q;
    so a;
    a.value=n;
    a.cnt=0;
    q.push(a);
    while(!q.empty())
    {
        so t = q.front();
        q.pop();
        if (t.value-1==s || 2*t.value==s)
            return t.cnt+1;
        so x,y;
        x.value = t.value-1;
        x.cnt = t.cnt+1;
        y.value = t.value*2;
        y.cnt = t.cnt+1;
        q.push(x);
        q.push(y);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> s;
        cout << solve() << endl;
    }
    return 0;
}