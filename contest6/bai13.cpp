#include<iostream>
#include<vector>
using namespace std;

int n,x,a[10005],cnt;
void find(int a[] , int l , int r , int x)
{
    if (l > r)
        return ;
    int mid = (l+r)/2;
    if (a[mid]==x)
        cnt++;
    find(a,mid+1,r,x);
    find(a,l,mid-1,x);
}

void result()
{
    cnt=0;
    find(a,0,n-1,x);
    if (cnt==0)
        cout << -1 << endl;
    else 
        cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        for (int i=0;i<n;i++)
            cin >> a[i];
        result();
    }
    return 0;
}