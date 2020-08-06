#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int n;
ll a[10000005],b[10000005],cnt;
vector<bool> check;
void search(int k)
{
    cnt=0;
    for (int i=0;i<n;i++)
    {
        if (b[i]==k)
        {
            check[i]=true;
            break;
        }
        else 
            if (check[i]==false)
                cnt++;
    }
}

void solve()
{
    check.assign(10000005,false);
    sort(b,b+n);
    int rs=0;
    for (int i=0;i<n;i++)
    {
        search(a[i]);
        rs+=cnt;
    }
    cout << rs << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        solve();
    }
    return 0;
}