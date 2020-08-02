#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int n,a[15],b[15],k,kt;
void Try(int i)
{
    if (k<0)
        return ;
    for (int j=0;j<n;j++)
        if (a[j] > b[i-1])
        {
            k-=a[j];
            b[i]=a[j];
            if (k==0)
            {
                kt=1;
                cout <<"[";
                for (int x=1;x<i;x++)
                    cout << b[x] <<" ";
                cout << b[i] <<"] ";    
            }
            else 
                Try(i+1);
            k+=a[j]; 
        }
}
void solve()
{
    kt=0;
    cin >> n >> k;
    for (int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    b[0]=0;
    Try(1);
    if (kt==0)
        cout << "-1";
    cout << endl;    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}