#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

int v,e,x,y,check[1005];
vector< vector<int> > a;
bool Hamilton(int k , int u)
{
    if (k==v)
        return true;
    for (int i=0;i<a[u].size();i++)
        if (check[a[u][i]]==0)
        {
            check[a[u][i]]=1;
            if (Hamilton(k+1,a[u][i])==true)
                return true;
            check[a[u][i]]=0;
        }
    return false;
}

bool result()
{
    for (int i=1;i<=v;i++)
    {
        memset(check,0,sizeof(check));
        check[i]=1;
        if (Hamilton(1,i))
            return 1;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e;
        a.clear();
        a.resize(v+50);
        for (int i=0;i<e;i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for (int i=1;i<=v;i++)
            sort(a[i].begin(),a[i].end());
        cout << result() << endl;
    }
    return 0;
}