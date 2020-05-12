#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Display(vector<long long> a, long long n)
{
    bool check[15];
    vector<int> kq;
    for (int i=0;i<=9;i++)
        check[i]=false;
    for (long long i=0;i<n;i++)
    {
        while (a[i]>0)
        {
            int temp = a[i]%10;
            if (check[temp]==false)
            {
                kq.push_back(temp);
                check[temp]=true;
            }
            a[i]/=10;
        }
    }
    sort(kq.begin(),kq.end());
    for (int i=0;i<kq.size();i++)
        cout << kq[i] <<" ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a;
        for (int i=0;i<n;i++)
        {
            long long temp;
            cin >> temp;
            a.push_back(temp);
        }
        Display(a,n);
    }
    return 0;
}