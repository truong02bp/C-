#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;
ll a[100005];

void solve()
{
    stack<int> s;
    vector<int> rs;
    rs.push_back(-1);
    s.push(a[n-1]);
    for (int i=n-2;i>=0;i--)
    {
        while (!s.empty() && a[i]>=s.top())
        {
            s.pop();
        }
        if (s.empty())
            rs.push_back(-1);
        else 
            rs.push_back(s.top());
        s.push(a[i]);        
    }
    for (int i=rs.size()-1;i>=0;i--)
        cout << rs[i] <<" ";
    cout << endl;       
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i];
        solve();    
    }
    return 0;
}