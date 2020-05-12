#include<iostream>
#include<vector>
using namespace std;

int HieuMax(vector<int> &a , int n);

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
        cout << HieuMax (a,n) << endl;
    }
    return 0;
}

int HieuMax(vector<int> &a , int n)
{
    int max=-1;
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
        {
            if (a[j] > a[i])
            {
                int hieu = a[j]-a[i];
                if (hieu > max)
                    max = hieu;
            }
        }
    return max;
}