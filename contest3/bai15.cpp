#include<iostream>
using namespace std;

int n,s,m;

void result()
{
    if (n < m || ((n==m  || 6*n < 7*m) && s > 6))
        cout << -1 << endl;
    else 
    {
        int x = s * m , rs;
        if (x%n==0)
            rs = x/n;
        else 
            rs = x/n + 1;
        cout << rs << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s >> m;
        result();
    }
    return 0;
}