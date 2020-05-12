#include<iostream>
#include<vector>
using namespace std;

long long Sum(vector<int> &a , int l , int r); 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,q;
        cin >> n >> q;
        vector<int> a;
        for (int i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        while (q--)
        {
            int l,r;
            cin >> l >> r;
            cout << Sum(a,l,r) <<" ";
        }
        cout << endl;
    }
    return 0;
}
long long Sum(vector<int> &a , int l , int r)
{
    long long sum=0;
    for (int i=l;i<=r;i++)
        sum+=a[i];
    return sum;
}