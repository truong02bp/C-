#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

#define modulo 1000000007;
int n;
vector<int> a;
long long rs;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        a.clear();
        for (int i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        rs=0;
        for (int i=0;i<n;i++)
        {
            rs+=i*a[i];
            rs%=modulo;
        }
        cout << rs << endl;        
    }
    return 0;
}