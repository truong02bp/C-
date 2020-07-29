#include<iostream>
using namespace std;

int a[1005],n;

void result()
{
    int i = n-1;
    while (a[i] > a[i+1])
        i--;
    if (i>0)
    {
        int k = n;
        while (a[i] > a[k])
            k--;
        int temp;
        temp = a[i];
        a[i] = a[k];
        a[k] = temp;
        int l=i+1,r=n;
        while (l <= r)
        {
            temp = a[l];
            a[l] = a[r];
            a[r] = temp;
            l++;
            r--;
        }    
        for (int i=1;i<=n;i++)
            cout << a[i] <<" ";
    }
    else 
    {
        for (int i=1;i<=n;i++)
            cout << i <<" ";
    }        
    cout << endl;   
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=1;i<=n;i++)
            cin >> a[i];
        result();    
    }
    return 0;
}