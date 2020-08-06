#include<bits/stdc++.h>
using namespace std;

int n,s,a[300];

bool result()
{
    int f[40005]={0};
    f[0]=1;
    for (int i=0;i<n;i++)
        for (int j=s;j>=a[i];j--)
            if (f[j]==0 && f[j-a[i]]==1)
                f[j]=1;
    if (f[s]==1)
        return true;
    return false;                
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> s;
        for (int i=0;i<n;i++)
            cin >> a[i];
        if (result())
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;        
    }
    return 0;
}