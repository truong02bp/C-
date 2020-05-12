#include<iostream>
using namespace std;

int n,k,c[1005][1005];
#define modulo 1000000007;
void result()
{
    for (int i=0;i<=1000;i++)
        for (int j=0;j<=i;j++)
            if (i==j || j==0)
                c[i][j]=1;
            else 
                c[i][j] = (c[i-1][j-1] + c[i-1][j])%modulo;
}
int main()
{
    int t;
    cin >> t;
    result();
    while (t--)
    {
        cin >> n >> k;
        cout << c[n][k] << endl;
    }
    return 0;
}