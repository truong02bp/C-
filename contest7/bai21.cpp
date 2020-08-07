#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;
ll a[100005],b[100005],temp[100005];

void solve()
{
    stack<int> s,s2;
    b[n-1]=-1;
    s.push(a[n-1]);
    for (int i=n-2;i>=0;i--)
    {
        while (!s.empty() && a[i] >= s.top())
        {
            s.pop();
        }
        if (s.empty())
            b[i]=-1;
        else 
            b[i]=s.top();
        s.push(a[i]);        
    }
    s2.push(a[n-1]);
    temp[a[n-1]]=-1;
    for(int i=n-2;i>=0;i--)
    {
        while (!s2.empty() && a[i] <= s2.top())
            s2.pop();
        if (s2.empty())
            temp[a[i]]=-1;
        else 
            temp[a[i]]=s2.top();
        s2.push(a[i]);            
    }
    for (int i=0;i<n;i++)
        if (b[i]==-1)
            cout << -1 <<" ";
        else    
            cout << temp[b[i]]<<" ";
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