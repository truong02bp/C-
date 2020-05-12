#include<iostream>
#include<vector>
using namespace std;

int n,a[100],b[100],k;
void display(int k)
{
    cout <<"[";
    for (int i=0;i<k-1;i++)
        cout<<b[i]<<" ";
    cout <<b[k-1]<<"]"<<endl;
}
void Try(int k)
{
    if (k>0)
    {
        display(k);
    }
    for (int i=0;i<n-1;i++)
    {
        b[i] = a[i]+a[i+1];
        a[i] = b[i];
    }
    if (k>0)
    {
        Try(k-1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        Try(n);
    }
    return 0;
}