#include<iostream>
#include<algorithm>
using namespace std;

int n,a[100005];

void result()
{
    int i=0,j=n/2,rs=0;
    sort(a,a+n);
    while (j < n)
    {
        if (a[j] >= 2*a[i])
        {
            rs++;
            i++;
        }
        j++;
    }
    cout << n - rs << endl;
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