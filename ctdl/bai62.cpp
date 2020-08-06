#include<bits/stdc++.h>
using namespace std;

int n,k,a[100005];

int result(int l , int r)
{
    if (l > r)
        return -1;
    int mid = (l+r)/2;
    if (a[mid]==k)
        return mid+1;
    if (a[mid] > k)
        return result(l,mid-1);
    return result(mid+1,r);        
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for (int i=0;i<n;i++)
            cin >> a[i];
        if (result(0,n-1)==-1)
            cout << "NO" << endl;
        else
            cout << result(0,n-1) << endl;    
    }
    return 0;
}