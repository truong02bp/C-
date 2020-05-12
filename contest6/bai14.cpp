#include<iostream>
#include<vector>
using namespace std;

int n;
vector<bool> check(1000005,true);

void sangNto()
{
    check[0]=false;
    check[1]=false;
    for (int i=2;i*i<=1000000;i++)
        if (check[i]==true)
        {
            for (int j=i*i;j<=1000000;j+=i)
                check[j]=false;
        }
}
int main()
{
    int t;
    sangNto();
    cin >> t;
    while (t--)
    {
        cin >> n;
        int kt=-1;
        for (int i=2;i<=n/2;i++)
            if (check[i]==true && check[n-i]==true)
            {
                kt=0;
                cout << i << " " << n-i << endl;
                break;
            }
        if (kt==-1)
            cout << -1 << endl;
    }
    return 0;
}