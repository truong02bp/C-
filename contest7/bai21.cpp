#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int n,a[1000005],smaller[1000005];

void result()
{
    stack<int> sta;
    vector<int> rs;
    sta.push(a[n-1]);
    smaller[a[n-1]]=-1;
    for (int i=n-2;i>=0;i--)
    {
        while (!sta.empty() && a[i] <= sta.top())
            sta.pop();
        if (sta.empty())
            smaller[a[i]]=-1;
        else 
            smaller[a[i]]=sta.top();
        sta.push(a[i]);
    }
    while (!sta.empty())
        sta.pop();
    sta.push(a[n-1]);
    rs.push_back(-1);
    for (int i=n-2;i>=0;i--)
    {
        while (!sta.empty() && a[i] >= sta.top())
            sta.pop();
        if (sta.empty())
            rs.push_back(-1);
        else 
            rs.push_back(smaller[sta.top()]);
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