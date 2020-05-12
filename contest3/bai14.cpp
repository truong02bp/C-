#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;
ll n;
string a;
vector<ll> so;

string toString(ll x)
{
    string rs="";
    while (x>0)
    {
        rs = char(x%10+'0')+rs;
        x/=10;
    }
    return rs;
}
void result()
{
    so.clear();
    int kt=0;
    a = toString(n);
    for (ll i=1;i*i*i<=n;i++)
        so.push_back(i*i*i);
    for (int i=so.size()-1;i>=0;i--)
    {
        ll temp = so[i];
        string rs = toString(temp);
        int index=0;
        for (int j=0;j<a.length();j++)
            if (a[j]==rs[index])
                index++;
        if (index==rs.length())
        {
            kt=1;
            cout << rs << endl;
            break;
        }
    }
    if (kt==0)
            cout << "-1" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        result();
    }
    return 0;
}