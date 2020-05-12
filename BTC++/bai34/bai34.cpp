#include<iostream>
#include<algorithm>
using namespace std;

#define modulo 1000000007;

long long Resuilt(int n , int r);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,r;
        cin >> n >> r;
        cout << Resuilt(n,r) << endl;
    }
    return 0;
}
long long Resuilt(int n, int r)
{
    int a[1001];
    a[0]=1;
    for (int i=1;i<=n;i++)
        a[i]=0;
    for (int i=1;i<=n;i++)
        for (int j=min(i,r);j>0;j--)
        {
            a[j] = (a[j] + a[j-1])%modulo;
        }   
    return a[r];
}