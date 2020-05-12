#include<iostream>
#include<math.h>
using namespace std;

typedef long long ll;
int n;
ll k;

ll result(int n , ll k)
{
    if (k%2==1)
        return 1;
    ll temp = pow(2,n-1);
    if (temp==k)
        return n;
    if (k < temp)
        return result(n-1,k);
    return result(n-1,k-temp);
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << result(n,k) << endl;
    }
    return 0;
}