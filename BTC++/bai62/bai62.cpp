#include<iostream>
#include<vector>
using namespace std;

long long TichMax(vector<int> &a , int n);

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
        cout << TichMax(a,n) << endl;
    }
    return 0;
}
long long TichMax(vector<int> &a , int n)
{
    long long max=a[0],Tich;
    for (int i=0;i<n;i++)
    {
        Tich = a[i];
        if (max < Tich) 
                max = Tich;
        for (int j=i+1;j<n;j++)
        {
            Tich*=a[j];
            if (Tich > max)
                max = Tich;
        }
    }
    return max;
}
