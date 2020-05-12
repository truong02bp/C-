#include<iostream>
#include<algorithm>
using namespace std;

int n,a[1005];

void result()
{
    sort(a,a+n);
    int l=0,r=n-1;
    while (l<r)
    {
        cout << a[r] <<" " << a[l] <<" ";
        l++;
        r--;
    }
    if (l==r)
        cout << a[l] <<" ";
    cout << endl;
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
        result();
    }
    return 0;
}