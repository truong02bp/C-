#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int FindHieu(vector<int> &a , int n , int x)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (abs(a[i]-a[j])==x)
                return 1;
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        vector<int> a;
        cin >> n >> x;
        for (int i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        cout << FindHieu(a,n,x) << endl;
    }
    return 0;
}