#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,a[1005],k,cnt,index;
int find(int a[] , int l , int r , int k)
{
    if (l > r)
        return -1;
    int mid = (l+r)/2;
    if (a[mid]==k && mid!=index)
        cnt++;
    find(a,mid+1,r,k);
    find(a,l,mid-1,k);
}

void result()
{
    if (k==0)
        cout << 1 << endl;
    else 
    {
        sort(a,a+n);
        cnt=0;
        for (int i=1;i<=n;i++)
        {
            index = i;
            if (k>=a[i])
            {
                int t = find(a,1,n,k-a[i]);
            }
        }
        cout << cnt/2 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i=1;i<=n;i++)
        {
            cin >> a[i];
        }
        result();
    }
    return 0;
}