#include<iostream>
#include<queue>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;
typedef vector< vector<int> > vv;
int v,e,x,y,check[1005];
vv a;
int binarySearch(vector<int> a , int l , int r , int x)
{
    if (l > r)
        return -1;
    int m = (l+r)/2;
    if (a[m] == x)
        return m;
    if (a[m] > x)
        return binarySearch(a,0,m-1,x);
    return binarySearch(a,m+1,r,x);
}
void bfs(vv a , int u)
{
    queue<int> q;
    q.push(u);
    check[u]=1;
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        for (int i=0;i<a[s-1].size();i++)
            if (check[a[s-1][i]]==0)
            {
                q.push(a[s-1][i]);
                check[a[s-1][i]]=1;
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
        for (int j=0;j<a[i-1].size();j++)
            if (a[i-1][j] > i)
            {
                memset(check,0,sizeof(check));
                vv temp = a;
                int index = binarySearch(temp[a[i-1][j]-1],0,temp[a[i-1][j]-1].size()-1,i);
                temp[i-1].erase(temp[i-1].begin()+j);
                temp[a[i-1][j]-1].erase(temp[a[i-1][j]-1].begin()+index);
                bfs(temp,1);
                if (accept()==true)
                    cout << i << " " << a[i-1][j] <<" ";
            }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e;
        a.clear();
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
}