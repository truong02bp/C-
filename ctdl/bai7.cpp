#include<iostream>
#include<vector>
using namespace std;

int a[15],b[15],n,sum;

void result(int k)
{
    cout << "(";
    for (int i=1;i<k;i++)
        cout << b[i] <<" ";
    cout << b[k] <<") ";    
}

void Try(int i)
{
    for (int j=n;j>0;j--)
    if (j <= b[i-1])
    {
        sum+=a[j];
        b[i] = a[j];
        if (sum==n)
            result(i);
        else 
            if (sum < n)
                Try(i+1);
        sum-=a[j];            
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=1;i<=n;i++)
            a[i] = i;
        sum=0;    
        b[0]=10;
        Try(1);
        cout << endl;
    }
    return 0;
}