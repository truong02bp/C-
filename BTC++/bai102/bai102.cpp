#include<iostream>
using namespace std;

int Result(int a[] , int n , int k)
{
    int count=0;
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (a[i]+a[j]==k)
                count++;
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k,a[10001];
        cin >> n >> k;
        for (int i=0;i<n;i++)
            cin >> a[i];
        cout << Result(a,n,k) << endl;
    }
    return 0;
}