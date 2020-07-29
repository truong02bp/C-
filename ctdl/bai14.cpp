#include<iostream>
using namespace std;

int a[20],b[30],n,k;

void solve()
{
    int i = k,rs=0;
    while (a[i] == n-k+i)
        i--;
    if (i>0)    
    {
        a[i]++;
        for (int j=i+1;j<=k;j++)
            a[j] = a[j-1]+1;
        for (int i=1;i<=k;i++)
            if (b[a[i]]==0)
                rs++;           
    }
    else 
        rs = k;
    cout << rs << endl;    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;  
        for (int i=1;i<=n;i++)
            b[i]=0;
        for (int i=1;i<=k;i++)
        {
            cin >> a[i];
            b[a[i]]=1;
        }
        solve();
    }
    return 0;
}