#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n,m,a[1005],b[1005];
vector<int> c;

void result()
{
    c.assign(100005,0);
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            c[i+j]+= a[i]*b[j];
    for (int i=0;i<m+n-1;i++)
        cout << c[i] <<" ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        for (int i=0;i<m;i++)
            cin >> a[i];
        for (int j=0;j<n;j++)
            cin >> b[j];
        result();
    }
    return 0;
}