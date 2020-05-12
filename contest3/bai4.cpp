#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> a;
int n;
long long x,y;

void result()
{
    sort(a.begin(),a.end());
    int i=0;
    while (i<n)
    {
        x = x*10 + a[i];
        i++;
        if (i<n)
        {
            y = y*10+ a[i];
            i++;
        }
    }
    cout << x + y << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
        x=0,y=0;
        cin >> n;
        for (int i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        result();
    }
    return 0;
}