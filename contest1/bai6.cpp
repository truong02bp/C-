#include <iostream>
using namespace std;

int stop;
void sinh(int a[], int n)
{
    int i = n - 1;
    while (a[i] > a[i + 1])
        i--;
    if (i > 0)
    {
        int k = n;
        while (a[i] > a[k])
            k--;
        int t = a[k];
        a[k] = a[i];
        a[i] = t;
        int l=i+1,r=n;
        while (l<=r)
        {
            t = a[l];
            a[l] = a[r];
            a[r] = t;
            r--;
            l++;
        }
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
        int n;
        cin >> n;
        int a[100];
        for (int i = 1; i <= n; i++)
            a[i] = i;
        while (stop==0)
        {
            for (int i = 1; i <= n; i++)
                cout << a[i];
            sinh(a,n);
            cout <<" ";
        }
        cout << endl;
    }
    return 0;
}