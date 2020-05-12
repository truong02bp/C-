#include<iostream>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,i;
        vector<long long> a;
        cin >> n;
        long long temp1;
        cin >> temp1;
        a.push_back(temp1);
        for (i=1;i<n;i++)
        {
            long long temp;
            cin >> temp;
            if (a[i-1]==temp)
            {
                a[i-1]*=2;
                temp=0;
            }
            a.push_back(temp);
        }
        vector<long long> kq;
        for (i=0;i<a.size();i++)
            if (a[i]!=0)
                kq.push_back(a[i]);
        for (i=kq.size();i<a.size();i++)
            kq.push_back(0);
        for (i=0;i<kq.size();i++)
            cout << kq[i] <<" ";
        cout << endl;
    }
    return 0;
}