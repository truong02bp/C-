#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Kqua(vector<int> &a , int k);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a;
        int n,k;
        cin >> n >> k;
        for (int i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        cout << Kqua(a,k) << endl;
    }
    return 0;
}
int Kqua(vector<int> &a , int k)
{
    sort(a.begin(),a.end());
    return a[k-1];
}