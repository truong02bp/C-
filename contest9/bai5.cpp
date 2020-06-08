#include<iostream>
#include<vector>
using namespace std;

int v,e,x,y;

void result()
{
    cin >> v >> e;
    vector< vector<int> > a(v);
    for (int i=0;i<e;i++)
    {
        cin >> x >> y;
        a[x-1].push_back(y);
    }
    for (int i=0;i<v;i++)
    {
        cout << i+1 <<": ";
        for (int j=0;j<a[i].size();j++)
            cout << a[i][j] <<" ";
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