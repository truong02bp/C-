#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Min(vector<int> &a , int n);

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
        cout << Min(a,n) << endl;
    }
    return 0;
}

int Min(vector<int> &a , int n)
{
    sort(a.begin(),a.end());
    int min=999999;
    for (int i=0;i<n-1;i++)
        if ((a[i+1]-a[i]) < min)
            min = a[i+1]-a[i];
    return min;
}