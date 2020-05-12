#include<iostream>
using namespace std;

int stop;

void in(int a[] , int n)
{
    for (int i=1;i<=n;i++)
        cout << a[i];
    cout << endl;
}
void sinh(int a[] , int n)
{
    int i = n;
    while (a[i]==1)
    {
        a[i]=0;
        i--;
    }
    if (i>0)
    {
        a[i]=1;
    }
    else
    {
        stop=1;
    }
    
}
bool check(int a[] , int n , int k)
{
    int count=0;
    for (int i=1;i<=n;i++)
    {
        if (a[i]==1)
        {
            count++;
        }
        if (count > k)
            return false;
    }
    return (count==k);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        stop = 0;
        cin >> n >> k;
        int a[100];
        for (int i=1;i<=n;i++)
            a[i]=0;
        while (stop==0)
        {
            if (check(a,n,k)==true)
                in(a,n);
            sinh(a,n);
        }
    }
    return 0;
}