#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define modulo 1000000007;

vector<int> a;
long long sum;
int n;

void result()
{
    a.clear();
    sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        sum += i * a[i];
        sum%=modulo;
    }    
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        result();
    }
    return 0;
}