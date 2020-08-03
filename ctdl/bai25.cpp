#include<iostream>
#include<vector>
using namespace std;

int a[105],n,sum;

bool check()
{
    if (sum%2==1)
        return false;
    sum/=2;    
    vector<int> L(100000,0);
    L[0]=1;
    for (int i=0;i<n;i++)
        for (int j=sum;j>=a[i];j--)
            if (L[j]==0 && L[j-a[i]]==1)
                L[j]=1;
    if (L[sum]==1)
        return true;
    return false;                
}

void solve()
{
    sum=0;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    if (check()==false)
        cout << "NO" << endl;
    else 
        cout << "YES" << endl;    
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