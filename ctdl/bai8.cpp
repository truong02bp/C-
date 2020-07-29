#include<iostream>
#include<vector>
using namespace std;

int n,stop;
vector<int> a;
vector< vector<int> > rs;

void solve()
{
    int i = n-1;
    while (a[i] > a[i+1])
        i--;
    if (i>0)
    {
        int t,k=n;
        while (a[i] > a[k])
            k--;
        t = a[i];
        a[i] = a[k];
        a[k] = t;
        int l = i+1 , r=n;
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
    while (stop == 0)
    {
        rs.push_back(a);
        solve();
    }
    for (int i=rs.size()-1;i>=0;i--)
    {
        for (int j=1;j<=n;j++)
            cout << rs[i][j];
        cout <<" ";    
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        rs.clear();
        a.resize(15);
        cin >> n;
        for (int i=1;i<=n;i++)
            a[i] = i;
        result();
    }
    return 0;
}