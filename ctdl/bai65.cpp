#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int n;
ll a[100] , k;

void sangFibo()
{
    int i;
    a[1]=1;
    a[2]=1;
    for (int i=3;i<=93;i++)
        a[i] = a[i-1] + a[i-2];
}

char result(int n , ll k)
{
    if (n==1)
        return 'A';
    if (n==2)
        return 'B';
    if (k <= a[n-2])
        return result(n-2,k);
    return result(n-1,k-a[n-2]);            
}

int main()
{
    int t;
    cin >> t;
    sangFibo();
    while(t--)
    {
        cin >> n >> k;
        cout << result(n,k) << endl;
    }
    return 0;
}