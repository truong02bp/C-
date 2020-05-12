#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Resuilt(vector<int> &a , int n)
{
    sort(a.begin(),a.end());
    int l=0,r=n-1;
    while (l < r)
    {
        cout << a[l] <<" " << a[r] <<" ";
        l++;
        r--;
    }
    if (n%2==1)
        cout << a[l]<<" ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a;
        int n;
        cin >> n;
        for (int i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        Resuilt(a,n);
    }
    return 0;
}