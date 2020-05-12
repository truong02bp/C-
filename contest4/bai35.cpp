#include<iostream>
#include<algorithm>
using namespace std;

typedef long long ll;

int n;
int a[105];

ll findMid(int a[] , int l , int m , int r)
{
    ll sum=0,l_sum=-99999,r_sum=-99999;
    for (int i=m;i>=l;i--)
    {
        sum+=a[i];
        if (sum > l_sum)
            l_sum = sum;
    }
    sum=0;
    for (int i=m+1;i<=r;i++)
    {
        sum+=a[i];
        if (sum > r_sum)
            r_sum = sum;
    }
    return l_sum + r_sum;
}

ll result(int a[] , int l , int r)
{
    if (l==r)
        return a[l];
    int mid = (l+r)/2;
    ll temp = max(result(a,l,mid),result(a,mid+1,r));
    return max(temp,findMid(a,l,mid,r));
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
        cout << result(a,0,n-1) << endl;   
    }
    return 0;
}