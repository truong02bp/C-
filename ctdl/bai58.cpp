#include<bits/stdc++.h>
using namespace std;

int n;

void solve()
{
    int x = n / 7 ,index=-1;
    for (int i=x;i>=0;i--)
    {
        n-=i*7;
        if (n%4==0 && n>=0)
        {
            index = i;
            break;
        }
        else 
            n+=i*7;
    }
    if (index==-1)
        cout << -1;
    for (int i=0;i<n/4;i++)
        cout << 4;
    for (int j=0;j<index;j++)
        cout << 7;        
    cout << endl;          
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        solve();
    }
    return 0;
}