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
        int n;
        cin >> n;
        vector<int> a = Nhap(n);
        cout << Max(a) << endl;
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
    int i=0;
    while (a[i] <= a[i+1])
        i++;
    return a[i];
}