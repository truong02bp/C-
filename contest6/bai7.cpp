#include<iostream>
#include<algorithm>
using namespace std;

int n,a[1000005],b[1000005];

void result()
{
    sort(b,b+n);
    int i=0,j=n-1;
    while (a[i]==b[i])
        i++;
    while (a[j]==b[j])
        j--;
    cout << i+1 <<" " << j+1 << endl;
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
            b[i] = a[i];
        }
        result();
    }
    return 0;
}