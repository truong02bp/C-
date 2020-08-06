#include<bits/stdc++.h>
using namespace std;

int n,a[105];

int findMid(int l , int mid , int r)
{
    int sum=0,sum_l = -999999 , sum_r = -999999;
    for (int i=mid;i>=l;i--)
    {
        sum+=a[i];
        if (sum > sum_l)
            sum_l = sum;
    }
    sum=0;
    for (int j=mid+1;j<=r;j++)
    {
        sum+=a[j];
        if (sum > sum_r)
            sum_r = sum;
    }
    return sum_l+sum_r;
}

int result(int l , int r)
{
    if (l==r)
        return a[l];
    int mid = (l+r)/2;    
    int t = max(result(l,mid),result(mid+1,r));
    return max(t,findMid(l,mid,r));    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i];
        cout << result(0,n-1) << endl;    
    }
    return 0;
}