#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

int v,e,x,y,check[1005];
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
        for (int i=0;i<a[s-1].size();i++)
            if (check[a[s-1][i]]==0)
            {
                sta.push(s);
                sta.push(a[s-1][i]);
                check[a[s-1][i]]=1;
                break;
            }
    }
}

bool accept()
{
    for (int i=1;i<=v;i++)
        if (check[i]==0)
            return true;
    return false;
}
void result()
{
    for (int i=1;i<=v;i++)
    {
        memset(check,0,sizeof(check));
        check[i]=1;
        if (i==1)
            dfs(2);
        else 
            dfs(1);
        if (accept()==true)
            cout << i <<" ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
        cin >> v >> e;
        a.resize(v);
        for (int i=0;i<e;i++)
        {
            cin >> x >> y;
            a[x-1].push_back(y);
            a[y-1].push_back(x);
        }
        for (int i=0;i<v;i++)
            sort(a[i].begin(),a[i].end());
        result();
    }
    return 0;
}