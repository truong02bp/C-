#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int n,a[100005];

void result()
{
    stack<int> sta,sta2;
    vector<int> temp,rs;
    sta.push(n-1);
    sta2.push(n-1);
    temp.push_back(-1);
    rs.push_back(-1);
    for (int i=n-2;i>=0;i--)
    {
        while (!sta.empty() && a[i] >= a[sta.top()])
            sta.pop();
        if (sta.empty())
            temp.push_back(-1);
        else 
            temp.push_back(sta.top());
        sta.push(i);
    }
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