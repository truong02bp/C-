#include<iostream>
using namespace std;

int n,k;
#define modulo 1000000007;
void result()
{
    if (k>n)
        cout << 0 << endl;
    else 
    {
        long long rs=1;
        for (int i=n;i>=n-k+1;i--)
            rs = (rs*i)%modulo;
        cout << rs << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        result();
    }
    return 0;
}