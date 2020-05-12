#include<iostream>
#include<algorithm>
using namespace std;

int n,x,a[1000005];

void result()
{
    if (binary_search(a,a+n,x))
        cout << 1 << endl;
    else 
        cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        for (int i=0;i<n;i++)
            cin >> a[i];
        result();
    }
    return 0;
}