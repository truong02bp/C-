#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

struct canh
{
    int dau;
    int cuoi;
    int ts;
};
int v,e,w,x,y,parent[1005];
vector<canh> a,cayKhung;

bool cmp(canh x , canh y)
{
    return x.ts < y.ts;
}

int find(int u)
{
    if (parent[u]==-1)
        return u;
    return find(parent[u]);
}

void Union(int x , int y)
{
    int xParent = find(x);
    int yParent = find(y);
    if (xParent != yParent)
    {
        if (xParent >= yParent)
            parent[yParent] = xParent;
        else 
            parent[xParent] = yParent;
    }
}
bool chuTrinh()
{
    memset(parent,-1,sizeof(parent));
    for (int i=0;i<cayKhung.size();i++)
    {
        int x = find(cayKhung[i].dau);
        int y = find(cayKhung[i].cuoi);
        if (x==y)
            return true;
        Union(x,y);
    }
    return false;
}
void Kruskal()
{
    cayKhung.push_back(a[0]);
    int i=1,rs = a[0].ts;
    while (cayKhung.size() <= v-1 && i < a.size())
    {
        cayKhung.push_back(a[i]);
        if (chuTrinh()==false)
            rs+=a[i].ts;
        else 
        {
            cayKhung.pop_back();
        }
        i++;
    }
    cout << rs << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e;
        a.clear();
        cayKhung.clear();
        for (int i=0;i<e;i++)
        {
            canh temp;
            cin >> temp.dau >> temp.cuoi >> temp.ts;
            a.push_back(temp);
        }
        sort(a.begin(),a.end(),cmp);
        Kruskal();
    }
    return 0;
}
