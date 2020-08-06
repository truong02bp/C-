#include<bits/stdc++.h>
using namespace std;

priority_queue<int , vector<int> , less<int> > a;
int k;
string s;
vector<int> cnt;

void solve()
{
    while(k--)
    {
        int x = a.top();
        a.pop();
        x--;
        a.push(x);
    }
    long long rs=0;
    while (!a.empty())
    {
        int x = a.top();
        a.pop();
        rs+=x*x;
    }
    cout << rs << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cnt.assign(100,0);
        cin >> k >> s;
        for (int i=0;i<s.length();i++)
            cnt[s[i]-'0']++;
        for (int i=0;i<100;i++)
            if (cnt[i]!=0)
                a.push(cnt[i]);
        solve();        
    }
    return 0;
}