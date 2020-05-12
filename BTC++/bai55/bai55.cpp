#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Display(vector<int> &a , int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for (int i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        Display(a,n);
    }
    return 0;
}
void Display(vector<int> &a ,int n)
{
    sort(a.begin(),a.end());
    int l=0,r=n-1;
    while (l<r)
    {
        cout << a[r] << " " << a[l] <<" ";
        l++;
        r--;
    }
    if (l==r) cout << a[l] <<" ";
    cout << endl;
}