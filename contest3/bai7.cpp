#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;

vector<ll> a,b;
int n;

void nhap(vector<ll> &a)
{
    for (int i=0;i<n;i++)
        {
            ll temp;
            cin >> temp;
            a.push_back(temp);
        }
}
void result()
{
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll sum=0;
    for (int i=0;i<n;i++)
    {
        sum+=a[n-i-1]*b[i];
    }
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
        b.clear();
        cin >> n;
        nhap(a);
        nhap(b);
        result();
    }
    return 0;
}