#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Result(int a[] , int n)
{
    vector<int> f(10001,1);
    int rs=1;
    for (int i=1;i<n;i++)
    {
        for (int j=0;j<i;j++)
            if (a[j] < a[i])
                f[i]=max(f[i],f[j]+1);
        rs = max(f[i],rs);
    }
    return rs;
}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[10001];
        for (int i=0;i<n;i++)
            cin >> a[i];
        cout << Result(a,n) << endl;
    }
    return 0;
}