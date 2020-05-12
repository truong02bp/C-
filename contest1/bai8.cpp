#include<iostream>
#include<vector>
using namespace std;

int stop;

void sinh(vector<int> &a , int n)
{
    int i = n - 2;
    while (a[i] > a[i + 1])
        i--;
    if (i >= 0)
    {
        int k = n-1;
        while (a[i] > a[k])
            k--;
        int t = a[k];
        a[k] = a[i];
        a[i] = t;
        int l=i+1,r=n-1;
        while (l<=r)
        {
            t = a[l];
            a[l] = a[r];
            a[r] = t;
            r--;
            l++;
        }
    }
    else
    {
        stop=1;
    }
}
void in(vector<int> &a , int n)
{
    for (int i=0;i<n;i++)
        cout << a[i];
    cout <<" ";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stop=0;
        int n;
        cin >> n;
        vector< vector<int> > rs;
        vector<int> a;
        for (int i=0;i<n;i++)
            a.push_back(i+1);
        while (stop==0)
        {
            rs.push_back(a);
            sinh(a,n);
        }
        for (int i = rs.size()-1;i>=0;i--)
            in(rs[i],n);
        cout << endl;
    }
}