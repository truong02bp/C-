#include<iostream>
#include<algorithm>
using namespace std;

int n,m,a[1000005],b[1000005],c[3000005];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k=0;
        cin >> n >> m;
        for (int i=0;i<n;i++)
        {
            cin >> a[i];
            c[k] = a[i];
            k++;
        }
        for (int i=0;i<m;i++)
        {
            cin >> b[i];
            c[k] = b[i];
            k++;
        }
        sort(c,c+k);
        for (int i=0;i<k;i++)
            cout << c[i] <<" ";
        cout << endl;
    }
    return 0;
}