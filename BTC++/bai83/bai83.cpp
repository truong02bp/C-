#include<iostream>
#include<vector>
using namespace std;

bool checkMountain(vector<int> &a , int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> a;
        cin >> n;
        for (int i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        int l,r;
        cin >> l >> r;
        vector<int> b;
        for (int i=l;i<=r;i++)
            b.push_back(a[i]);
        if (checkMountain(b,r-l+1)==true)
            cout <<"Yes" << endl;
        else
            cout <<"No" << endl;
    }
    return 0;
}
bool checkMountain(vector<int> &a , int n)
{
    int i=0;
    while (a[i] <= a[i+1] )
    {
        i++;
        if (i==n-1)
        return true;
    }
    while (a[i] >= a[i+1])
    {
        i++;
        if (i==n-1)
        return true;
    }
    return false;
}