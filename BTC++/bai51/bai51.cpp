#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<bool> check;
        vector<long long> a;
        for (long long i=0;i<n;i++)
            check.push_back(false);
        for (long long i=0;i<n;i++)
        {
            long long temp;
            cin >> temp;
            a.push_back(temp);
            if (temp < n && temp >=0)
                check[temp]=true;   // vị trí = a[i] thì đánh dấu có xuất hiện
        }
        for (long long i=0;i<n;i++)
        {
            if (check[i]==true)
            {   
                cout << i <<" ";
            }
            else
            {
                cout <<-1<<" ";
            }
                
        }
        cout << endl;
    }
    return 0;
}