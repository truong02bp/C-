#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        vector<long long> a;
        cin >> n;
        for (long long i=0;i<n;i++)
        {
            long long temp;
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        bool kt = false;
        for (long long i=1;i<n;i++)
        {
            if (a[i]!=a[0])
            {
                kt=true;
                cout << a[0] <<" " << a[i] << endl;
                break;
            }
        }
        if (kt==false)
            cout <<"-1" << endl;
    }
    return 0;
}