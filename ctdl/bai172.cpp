#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
int n;
int solve()
{
    queue<ii> q;
    set<int> check;
    q.push(ii(n,0));
    check.insert(n);
    while(!q.empty())
    {
        ii a = q.front();
        q.pop();
        if (a.first-1 == 1)
            return a.second+1;
        if (check.find(a.first-1) == check.end())
        {
            check.insert(a.first-1);
            q.push(ii(a.first-1,a.second+1));
        }
        for (int i=2;i*i<=a.first;i++)
            if (a.first%i==0)
            {
                int u = a.first/i;
                if (check.find(u) == check.end())
                {
                    check.insert(u);
                    q.push(ii(u,a.second+1));
                }
            }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << solve() << endl;
    }
    return 0;
}