#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int MAX(vector<int> &a , int n);

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
        cout << MAX(a,n) << endl;
    }
    return 0;
}
int MAX(vector<int> &a, int n)
{
    int max = a[0];
    for (int i=1;i<n;i++)
        if (a[i] > max)
            max = a[i];
    return max;
}