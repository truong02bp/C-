#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

struct canh
{
    int dau;
    int cuoi;
    int ts;
};

int v,e;
vector<canh> a,cayKhung;
int check[1005];

bool cmp(canh x , canh y)
{
    return x.ts < y.ts;
}

void Prim()
{
    cayKhung.clear();
    memset(check,0,sizeof(check));
    int rs = a[0].ts;
    check[a[0].dau]=1;
    check[a[0].cuoi]=1;
    cayKhung.push_back(a[0]);
    while (cayKhung.size() < v-1)
    {
        for (int i=1;i<a.size();i++)
        {
            if (check[a[i].dau]==0 && check[a[i].cuoi]==1)
            {
                cayKhung.push_back(a[i]);
                rs+=a[i].ts;
                check[a[i].dau]=1;
                break;
            }
            else 
                if (check[a[i].dau]==1 && check[a[i].cuoi]==0)
                {
                    cayKhung.push_back(a[i]);
                    rs+=a[i].ts;
                    check[a[i].cuoi]=1;
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
    while (t--)
    {
        cin >> v >> e;
        a.clear();
        for (int i=0;i<e;i++)
        {
            canh temp;
            cin >> temp.dau >> temp.cuoi >> temp.ts;
            a.push_back(temp);
        }
        sort(a.begin(),a.end(),cmp);
        Prim();
    }
    return 0;
}