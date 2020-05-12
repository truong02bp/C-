#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> a;
int n;

void result()
{
    vector<int> b = a;
    sort(b.begin(),b.end());
    int kt=0,mid;
    if (n%2==0)
        mid = n/2-1;
    else 
        mid = n/2;
    for (int i=0;i<=mid;i++)
        if (a[i]!=b[i] && a[n-i-1]!=b[i])
        {
            kt=1;
            break;
        }
    if (kt==0)
        cout <<"Yes" << endl;
    else 
        cout <<"No" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
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
