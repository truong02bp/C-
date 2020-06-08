#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<string.h>
using namespace std;

int v,e,x,y,check[1005];
bool rs;
vector< vector<int> > a;

void dfs(int u)
{
    stack<int> sta;
    sta.push(u);
    check[u]=1;
    while (!sta.empty())
    {
        int s = sta.top();
        sta.pop();
        for (int i=0;i<a[s].size();i++)
            if (check[a[s][i]]==0)
            {
                sta.push(s);
                sta.push(a[s][i]);
                check[a[s][i]]=1;
                break;
            }
            else 
                if (a[s][i]==u)
                    rs = true;
    }
}

bool result()
{
    for (int i=1;i<=v;i++)
    {
        memset(check,0,sizeof(check));
        rs = false;
        dfs(i);
        if (rs==true)
            return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e;
        a.clear();
        a.resize(v+1);
        for (int i=0;i<e;i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
        }
        for (int i=1;i<=v;i++)
            sort(a[i].begin(),a[i].end());
        if (result()==true)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}