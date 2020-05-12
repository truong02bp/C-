#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n,a[10005];
void result()
{
    int cnt=0;
    sort(a,a+n);
    for (int i=0;i<n;i++)
        if (a[i]==a[i+1])
            cnt++;
    cout << a[n-1]-a[0]+1+cnt-n << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        result();
    }
    return 0;
}