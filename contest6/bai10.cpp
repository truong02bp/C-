#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n;
vector<int> a;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<bool> check(10,false);
        a.clear();
        cin >> n;
        for (int i=0;i<n;i++)
        {
            long long temp;
            cin >> temp;
            while (temp>0)
            {
                if (check[temp%10]==false)
                {
                    a.push_back(temp%10);
                    check[temp%10]=true;
                }
                temp/=10;
            }
        }
        sort(a.begin(),a.end());
        for (int i=0;i<a.size();i++)
            cout << a[i] <<" ";
        cout << endl;
    }
    return 0;
}