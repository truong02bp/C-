#include<bits/stdc++.h>
using namespace std;

struct cv{
    int code;
    int time;
    int value;
};
int n;
cv a[1005];
bool check[1005];
bool cmp(cv a , cv b)
{
    return a.value > b.value;
}
void solve()
{
    int rs=0,cnt=0;
    sort(a,a+n,cmp);
    for (int i=0;i<n;i++)
        for (int j=min(n,a[i].time)-1;j>=0;j--)
            if (check[j]==false)
            {
                rs+=a[i].value;
                cnt++;
                check[j]=true;
                break;
            }
    cout << cnt <<" " << rs << endl;        
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
            cin >> a[i].code >> a[i].time >> a[i].value;
            check[i]=false;
        }
        solve();
    }
    return 0;
}