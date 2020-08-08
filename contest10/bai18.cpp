#include<iostream>
#include<vector>
#include<queue>
using namespace std;

typedef pair<int,int> ii;
typedef long long ll;
priority_queue < ii , vector<ii> , greater<ii> > q;
vector<ii> a[100005];
int n,m,u,v,c;

void result()
{
    ll d[100005],f[100005];
    for (int i=1;i<=n;i++)
    {
        d[i]= __LONG_LONG_MAX__;
        f[i]=0;
    }
    d[1]=0;
    f[1]=1;
    q.push({0,1});
    while (!q.empty())
    {
        int s = q.top().second;
        q.pop();
        if (s==n)
        {
            cout << d[n] <<" " << f[n] << endl;
            return;
        }
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
}

int main()
{
   cin >> n >> m;
   for (int i=0;i<m;i++)
   {
       cin >> u >> v >> c;
       a[u].push_back({c,v});
       a[v].push_back({c,u});
   }
   result();
   return 0;
}