#include<iostream>
using namespace std;

int n,x,a[100],b[100],sum,kt;

void accept(int k)
{
    cout <<"[";
    for (int i=1;i<k;i++)
        cout << b[i] <<" ";
    cout << b[k] <<"] ";    
}

void Try(int k)
{
    if (sum > x)
        return ;
    if (k == n+1)
        return ;
    for (int i=0;i<n;i++)
        if (a[i] >= b[k-1])
        {
            b[k] = a[i];
            sum+=b[k];
            if (sum == x)
            {
                kt=1;
                accept(k);
            }
            else 
                Try(k+1);
            sum-=b[k];        
        }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sum=0,kt=0;
        cin >> n >> x;
        for (int i=0;i<n;i++)
            cin >> a[i];
        Try(1);  
        if (kt==0)
            cout << -1;
        cout << endl;      
    }
    return 0;
}