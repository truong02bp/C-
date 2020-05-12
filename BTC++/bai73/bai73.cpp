#include<iostream>
#include<vector>
using namespace std;

int Max(vector<int> &a , int n);
vector<int> Nhap (int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a = Nhap(n);
        cout << Max(a,n) << endl;
    }
    return 0;
}
vector<int> Nhap ( int n)
{
    vector<int> a;
    for (int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    return a;
}
int Max(vector<int> &a , int n)
{
    int max = 0;
    for (int i=0;i<n-1;i++)
    {
        int j=n-1;
        while (j>i)
        {
            if (a[j]>=a[i]) 
            {
                if (max < j-i)
                    max = j-i;
                break;
            }
            j--;
        }
    }
    return max;
}