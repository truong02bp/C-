#include<iostream>
#include<vector>
using namespace std;

int v,e,x,y;
void result()
{
    cin >> v >> e;
    vector< vector<int> > rs(v);
    for (int i=0;i<e;i++)
    {
        cin >> x >> y;
        rs[x-1].push_back(y);
        rs[y-1].push_back(x);
    }
    for (int i=0;i<v;i++)
    {
        cout << i+1 <<": ";
        for (int j=0;j<rs[i].size();j++)
            cout << rs[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        result();
    }
    return 0;
}