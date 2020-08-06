#include<bits/stdc++.h>
using namespace std;

long long p,q;

void solve()
{
    long long i;
    while (1)
    {
        if (q%p==0)
        {
            cout << 1 << "/" << q/p << endl;
            break;
        }
        else 
        {
            i = q/p+1;
            cout << 1 << "/" << i <<" + ";
            p = p*i-q;
            q = q*i; 
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> p >> q;
        solve();
    }
    return 0;
}