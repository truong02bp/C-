#include<iostream>
using namespace std;

typedef long long ll;

int n;
ll k;
ll fibo[94];

void fibonacci()
{
    fibo[1]=1;
    fibo[2]=1;
    for (int i=3;i<=93;i++)
        fibo[i] = fibo[i-2] + fibo[i-1];
}

char result(int n , ll k)
{
    if (n==1)
        return 'A';
    if (n==2)
        return 'B';
    if (k <= fibo[n-2])
        return result(n-2,k);
    return result(n-1,k-fibo[n-2]);
}

int main()
{
    int t;
    cin >> t;
    fibonacci();
    while (t--)
    {
        cin >> n >> k;
        cout << result(n,k) << endl;
    }
    return 0;
}