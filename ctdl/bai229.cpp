#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
int n,m,u,v,c;
priority_queue< ii,vector<ii>,greater<ii> > q;
vector< vector<ii> > a;

void dijktra()
{
    q.push({0,1});
    ll d[100005],f[100005];
    for (int i=1;i<=n;i++)
    {
        d[i]=1e18;
        f[i]=0;
    }
    f[1]=1;
    d[1]=0;
    while(!q.empty())
    {
        int s = q.top().second;
        q.pop();
        for (int i=0;i<a[s].size();i++)
        {
            int t = a[s][i].second;
            if (d[t] > d[s] + a[s][i].first)
            {
                d[t] = d[s] + a[s][i].first;
                f[t] = f[s];
                q.push({d[t],t});
            }
            else 
                if (d[t] == d[s] + a[s][i].first)
                    f[t]+=f[s];
        }
    }
    cout << d[n] << " " << f[n] << endl;
}

int main()
{
    cin >> n >> m;
    a.clear();
    a.resize(n+50);
    for (int i=0;i<m;i++)
    {
        cin >> u >> v >> c;
        a[u].push_back({c,v});
        a[v].push_back({c,u});
    }
    dijktra();
}