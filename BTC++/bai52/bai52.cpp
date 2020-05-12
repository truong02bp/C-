#include<iostream>
#include<vector>
using namespace std;

int main()
{   
    int t;
    cin >> t;
    while (t--)
    {
        long long n,*a,i;
        a = new long long[10000001];
        vector<long long> kq;
        cin >> n;
        for (i=0;i<n;i++)
        {
            cin >> a[i];
            if (a[i]!=0)
            {
                kq.push_back(a[i]);
            }
        }
        delete(a);
        for (i=kq.size()-1;i<n;i++)
            kq.push_back(0);
        for (i=0;i<n;i++)
            cout << kq[i] <<" ";
        cout << endl;
    }
}