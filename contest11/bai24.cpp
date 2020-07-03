#include<iostream>
#include<algorithm>
using namespace std;

int n,a[1000005];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        if (n%2==0)
            cout << a[n/2-1] << endl;
        else 
            cout << a[n/2] << endl;        
    }
    return 0;
}