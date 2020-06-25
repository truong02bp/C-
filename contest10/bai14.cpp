#include<iostream>
#include<vector>
#include<queue>
using namespace std;

typedef pair<int,int> ii;
int v,e,x,u,y,k,check[1005];
vector< vector<ii> > a;

void result()
{    
    int d[1005];
    priority_queue< ii , vector<ii> , greater<ii> > q;
    for (int i=1;i<=v;i++)
        d[i] = 1e7;
    d[u] = 0;
    q.push({0,u});
    while (!q.empty())
    {
        int s = q.top().second;
        q.pop();
        for (int i=0;i<a[s].size();i++)
        {
            int temp = a[s][i].second;
            if (d[temp] > d[s] + a[s][i].first)
            {
                d[temp] = d[s] + a[s][i].first;
                q.push({d[temp],temp});
            }
        }
    }
    for (int i=1;i<=v;i++)
        cout << d[i] <<" ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e >> u;
        a.clear();
        a.resize(v+50);
        for (int i=0;i<e;i++)
        {
            cin >> x >> y >> k;
            a[x].push_back({k,y});
            a[y].push_back({k,x});
        }
        result();
    }
    return 0;
}