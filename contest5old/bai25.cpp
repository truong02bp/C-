#include<iostream>
using namespace std;

int n;
long long f[100];
void result()
{
    int sum=0;
    f[0]=1;
    for (int i=1;i<=3;i++)
    {
        sum+=f[i-1];
        f[i] = sum;
    }
    for (int i=4;i<=50;i++)
    {
        f[i] = f[i-1]+f[i-2]+f[i-3];
    }
}

int main()
{
    int t;
    cin >> t;
    result();
    while (t--)
    {
        cin >> n;
        cout << f[n] << endl;
    }
    return 0;
}