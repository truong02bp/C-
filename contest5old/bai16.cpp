#include<iostream>
#include<algorithm>

using namespace std;
int n;
int a[1005];
int b[1005];

void result()
{
    int rs = a[1];
    for (int i=1;i<=n;i++)
    {
        b[i]=a[i];
        for (int j=1;j<i;j++)
            if (a[j] < a[i])
                b[i] = max(b[i],b[j]+a[i]);
        rs = max(b[i],rs);
    }
    cout << rs << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=1;i<=n;i++)
            cin >> a[i];
        result();
    }   
}