#include<iostream>
using namespace std;

int n,k;
int a[1000001];

int result(int left , int right)
{
    if (left > right)
        return -1;
    int mid = (left + right)/2;
    if (a[mid]==k)
        return mid+1;
    if (a[mid] < k)
        return result(mid+1,right);
    if (a[mid] > k)
        return result(left,mid-1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i=0;i<n;i++)
            cin >> a[i];
        int rs = result(0,n-1);
        if (rs==-1)
            cout << "NO" << endl;
        else 
            cout << rs << endl;
    }
    return 0;
}