#include<iostream>
#include<algorithm>
using namespace std;

int n,a[10000005];

void result()
{
    sort(a,a+n);
    int kt=0;
    for (int i=1;i<n;i++)
        if (a[i-1] < a[i])
        {
            kt=1;
            break;
        }
    if (kt==0 || n==1)
        cout << -1 << endl;
    else 
        cout << a[0] << " " << a[1] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i];
        result();
    }
    return 0;
}