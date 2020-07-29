#include<iostream>
using namespace std;

int n,k,a[20],stop;

void solve()
{
    int i = k;
    while (a[i] == n-k+i)
        i--;
    if (i>0)
    {
        a[i]++;
        for (int j=i+1;j<=k;j++)
            a[j] = a[j-1]+1;    
    }    
    else 
        stop = 1;
}

void result()
{
    stop = 0;
    while (stop==0)
    {
        for (int i=1;i<=k;i++)
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
        cin >> n >> k;
        for (int i=1;i<=k;i++)
            a[i] = i;
        result();    
    }
    return 0;
}