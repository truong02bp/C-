#include<iostream>
#include<algorithm>
using namespace std;

int n,m;
long long a[1000005],b[1000005];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i=0;i<n;i++)
            cin >> a[i];
        for (int i=0;i<m;i++)
            cin >> b[i];
        sort(a,a+n);
        sort(b,b+m);
        cout << a[n-1]*b[0] << endl;
    }
    return 0;
}