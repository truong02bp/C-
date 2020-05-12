#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool DieuKien(long long i , long long j)
{
    return i>j;
}
void Display(vector<long long> &a , int n , int k)
{
    sort(a.begin(),a.end(),DieuKien);
    for (int i=0;i<k;i++)
        cout << a[i] <<" ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<long long> a;
        for (int i=0;i<n;i++)
        {
            long long temp;
            cin >> temp;
            a.push_back(temp);
        }
        Display(a,n,k);
    }
    return 0;
}