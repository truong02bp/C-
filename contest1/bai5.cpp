#include<iostream>
using namespace std;

int stop;
void sinh(int a[] , int n , int k)
{
    int i=k;
    while (a[i]==n-k+i)
        i--;
    if (i>0)
    {
        a[i]++;
        for (int j=i+1;j<=k;j++)
            a[j] = a[j-1]+1;
    }
    else
    {
        stop=1;
    }
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stop=0;
        int n,k;
        cin >> n >> k;
        int a[100];
        for (int i=1;i<=k;i++)
            a[i]=i;
        while (stop==0)
        {
            for (int i=1;i<=k;i++)
                cout << a[i];
            sinh(a,n,k);
            cout <<" ";
        }
        cout << endl;
    }
    return 0;
}