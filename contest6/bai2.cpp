#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int n,x,a[100005];

void result()
{
    for (int i=0;i<n;i++)
    {
        int kt=0;
        for (int j=0;j<n-1;j++)
            if (abs(x-a[j]) > abs(x-a[j+1]))
            {
                kt=1;
                swap(a[j],a[j+1]);
            }
        if (kt==0)
            break;
    }
    for (int i=0;i<n-1;i++)
        cout << a[i] <<" ";
    cout << a[n-1] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        for (int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        result();
    }
    return 0;
}