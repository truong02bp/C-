#include<bits/stdc++.h>
using namespace std;

int n;
long long k;

long long result(int n , long long k)
{
    if (k%2==1)
        return 1;
    long long x = pow(2,n-1);
    if (x == k)
        return n;
    if (k < x)
        return result(n-1,k);
    return result(n-1,k-x);        
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << result(n,k) << endl;
    }
    return 0;
}