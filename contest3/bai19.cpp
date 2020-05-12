#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
ll p, q;

void result()
{
    ll i;
    while (1)
    {
        if (q%p==0)
        {
            cout << 1 << "/" << q/p << endl;
            break;
        }   
        else 
        {
            i = q/p +1;
            cout << 1 << "/" << i <<" + ";
            p = p*i - q;
            q = q*i;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> p >> q;
        result();
    }
    return 0;
}