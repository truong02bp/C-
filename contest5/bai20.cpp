#include<iostream>
#include<vector>
using namespace std;

long long n;

void result()
{
    vector<int> a;
    while (n>0)
    {
        a.push_back(n%10);
        n/=10;
    }
    long long f[20],len=a.size();
    long long sum=0;
    for (int i=1;i<=len;i++)
        f[i] = a[len-i];
    f[0]=0;
    for (int i=1;i<=len;i++)
    {
        for (int j=1;j<i;j++)
        {
            f[j] = f[j]*10+f[i];
            sum+=f[j];
        }
        sum+=f[i];
    }
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        result();
    }
    return 0;
}