#include<bits/stdc++.h>
using namespace std;

int n,a[100],b[100];

bool solve()
{
    sort(b,b+n);
    int mid;
    if (n%2==1)
        mid = n/2-1;
    else 
        mid = n/2;
    for (int i=0;i<=mid;i++)
        if (a[i]!=b[i] && a[n-i-1]!=b[i])
            return false;
    return true;                
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
        {
            cin >> a[i];
            b[i]=a[i];
        }
        if (solve())
            cout << "YES";
        else 
            cout << "NO";
        cout << endl;        
    }
    return 0;
}