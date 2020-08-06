#include<iostream>
#include<math.h>
using namespace std;

int n,a[10005];

void result()
{
    int rs =-99999999;
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (abs(rs-0) > abs(a[i]+a[j]-0))
                rs = a[i]+a[j];
    cout << rs << endl;
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