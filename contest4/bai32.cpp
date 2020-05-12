#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;
vector<ll> a,b;
vector<bool> check;
int n,cnt;

int find(ll x)
{
    for (int i=0;i<n;i++)
    {
        if (x==b[i])
        {
           check[i]=true;
            return i;
        }
        if (check[i]==false)
            cnt++;
    }
}
void result()
{
    int rs=0;
    b = a;
    sort(b.begin(),b.end());
    for (int i=0;i<n;i++)
    {
        cnt=0;
        int index = find(a[i]);
        rs+=cnt;
    }
    cout << rs << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
        b.clear();
        check.assign(10000005,false);
        cin >> n;
        for (int i=0;i<n;i++)
        {
            ll temp;
            cin >> temp;
            a.push_back(temp);
        }
        result();
    }
    return 0;
}