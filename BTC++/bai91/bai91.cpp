#include<iostream>
using namespace std;

int Result(int a[] , int n)
{
    int rs=0;
    int l=0,r=n-1;
    while (l<=r)
    {
        if (a[l]==a[r])
        {
            l++;
            r--;
        }
        else
        {
            if (a[l] < a[r])
            {
                l++;
                a[l]+=a[l-1];
                rs++;
            }
            if (a[l] > a[r])
            {
                r--;
                a[r]+=a[r+1];
                rs++;
            }
        }
    }
    return rs;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,a[10001];
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i];
        cout << Result(a,n) << endl;
    }
    return 0;
}