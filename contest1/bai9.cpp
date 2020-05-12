#include<iostream>
using namespace std;

int a[100],rs[100] , n;
void in()
{
    for (int i=1;i<=n;i++)
        cout << rs[i];
    cout <<" ";
}
void Try(int k)
{
    for (int j=0;j<2;j++)
    {
        a[k] = j;
        rs[k] = a[k]^a[k-1];
        if (k==n)
            in();
        else
        {
            Try(k+1);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Try(1);
        cout << endl;
    }
    return 0;
}