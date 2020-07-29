#include<iostream>
using namespace std;

int a[1005],n,k;

void result()
{
    int i = k;
    while (a[i] == n-k+i)
        i--;
    if (i>0)
    {
        a[i]++;
        for (int j=i+1;j<=k;j++)
            a[j] = a[j-1]+1;
        for (int j=1;j<=k;j++)
            cout << a[j] <<" ";    
    }    
    else 
    {
        for (int j=1;j<=k;j++)
            cout << j <<" ";    
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i=1;i<=k;i++)
            cin >> a[i];
        result();    
    }
    return 0;
}