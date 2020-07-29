#include<iostream>
using namespace std;

int n,a[20],stop;

void solve()
{
    int i = n-1;
    while (a[i] > a[i+1])
        i--;
    if (i>0)
    {
        int k = n;
        while (a[i] > a[k])
            k--;
        int t;
        t = a[i];
        a[i] = a[k];
        a[k] = t;
        int l = i+1,r=n;
        while (l<=r)
        {
            t = a[l];
            a[l] = a[r];
            a[r] = t;
            l++;
            r--;
        }    
    }    
    else
        stop = 1;
}
void result()
{
    stop = 0;
    while (stop==0)
    {
        for (int i=1;i<=n;i++)
            cout << a[i];
        cout <<" ";
        solve();    
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=1;i<=n;i++)
            a[i] = i;
        result();    
    }
    return 0;
}