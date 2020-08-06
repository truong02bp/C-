#include<bits/stdc++.h>
using namespace std;

int k;
long long a,b;

void solve()
{
    vector<int> rs;
    int nho=0;
    while (a>0 || b >0)
    {
        int value = a%10 + b%10 + nho;
        nho = value / k;
        rs.push_back(value%k);
        a/=10;
        b/=10;
    }
    if (nho!=0)
        rs.push_back(nho);
    for (int i=rs.size()-1;i>=0;i--)
        cout << rs[i];
    cout << endl;       
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> k >> a >> b;
        solve();
    }
    return 0;
}