#include<bits/stdc++.h>
using namespace std;

int v,e,k,check[1005];

struct canh
{
    int dau;
    int cuoi;
    int ts;
};

vector<canh> a,cayKhung;

bool cmp(canh a , canh b)
{
    return a.ts < b.ts;
}

void Prim()
{
    sort(a.begin(),a.end(),cmp);
    memset(check,0,sizeof(check));
    canh t = a[0];
    int rs = t.ts;
    cayKhung.push_back(t);
    check[t.dau]=1;
    check[t.cuoi]=1;
    while(cayKhung.size()<v-1)
    {
        for (int i=1;i<a.size();i++)
        {
            if (check[a[i].dau]==1 && check[a[i].cuoi]==0)
            {
                cayKhung.push_back(a[i]);
                rs+=a[i].ts;
                check[a[i].cuoi]=1;
                break;
            }
            else 
                if (check[a[i].dau]==0 && check[a[i].cuoi]==1)
                {
                    cayKhung.push_back(a[i]);
                    rs+=a[i].ts;
                    check[a[i].dau]=1;
                    break;
                }         
        }
    }
    cout << rs << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> v >> e;
        a.clear();
        cayKhung.clear();
        for (int i=0;i<e;i++)
        {
            canh x;
            cin >> x.dau >> x.cuoi >> x.ts;
            a.push_back(x);
        }     
        Prim();
    }
    return 0;
}