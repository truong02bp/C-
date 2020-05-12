#include<iostream>
#include<vector>
using namespace std;

vector<int> Nhap(int n);
int Max(vector<int> &a);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a = Nhap(n);
        for (int i=0;i<n-k+1;i++)
        {
            vector<int> b;
            b.push_back(a[i]);
            int j=i+1;
            while (j-i<k)
            {
                b.push_back(a[j]);
                j++;
            }
            cout << Max(b) <<" ";
        }
        cout << endl;
    }
    return 0;
}
vector<int> Nhap(int n)
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
int Max(vector<int> &a)
{
    int max=a[0];
    for (int i=1;i<a.size();i++)
        if (a[i] > max)
            max = a[i];
    return max;
}