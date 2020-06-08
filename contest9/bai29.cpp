#include<iostream>
#include<vector>
using namespace std;

int v,e,x,y;
vector< vector<int> > a;

int result()
{
    int rs = 0;
    for (int i=1;i<=v;i++)
        if (a[i].size()%2==1)
            rs++;
    if (rs==0)
        return 2;
    if (rs==2)
        return 1;
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
        a.resize(v+1);
        for (int i=0;i<e;i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        cout << result() << endl;
    }
    return 0;
}