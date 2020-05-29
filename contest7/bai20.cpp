#include<iostream>
#include<stack>
#include<vector>
using namespace std;


int n,a[100005];

void result()
{
    stack<int> sta;
    vector<int> rs;
    rs.push_back(-1);
    sta.push(a[n-1]);
    for (int i=n-2;i>=0;i--)
    {
        while (!sta.empty() && a[i] >= sta.top())
        {
            sta.pop();
        }
        if (sta.empty())
            rs.push_back(-1);
        else 
            rs.push_back(sta.top());
        sta.push(a[i]);
    }
    for (int i=rs.size()-1;i>=0;i--)
        cout << rs[i] <<" ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i];
        result();
    }
    return 0;
}