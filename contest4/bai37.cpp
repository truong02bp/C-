#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;

int n;
vector<ll> a;
ll x;

ll find(int l , int r)
{
    if (l > r)
        return -1;
    int mid = (l+r)/2;
    if (a[mid] <= x && a[mid+1]>x)
        return mid+1;
    if (a[mid] < x)
        return find(mid+1,r);
    if (a[mid] > x)
        return find(l,mid-1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
        cin >> n >> x;
        for (int i=0;i<n;i++)
        {
            ll temp;
            cin >> temp;
            a.push_back(temp);
        }
        cout << find(0,n-1) << endl;
    }
    return 0;
}