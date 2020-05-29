#include<iostream>
#include<stack>
using namespace std;

int n,Q,a[1000005],rs[1000005],q[1000005];

void result()
{
    stack<int> sta;
    sta.push(a[n-1]);
    rs[n-1]=0;
    for (int i=n-2;i>=0;i--)
    {
        if (a[i] < sta.top())
        {
            rs[a[i]] = rs[sta.top()]+1;
            sta.push(a[i]);
        }
        else 
        {
            while(!sta.empty())
            {
                if (a[i] > sta.top())
                    sta.pop();
                else 
                    break;
            }
            if (sta.empty())
                rs[a[i]]=0;
            else 
            {
                rs[a[i]] = rs[sta.top()]+1;
            }
            sta.push(a[i]);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> Q;
        for (int i=0;i<n;i++)
            cin >> a[i];
        for (int i=0;i<Q;i++)
            cin >> q[i];
        result();
        for (int i=0;i<Q;i++)
            cout << rs[q[i]] <<" ";
        cout << endl;
    }
}