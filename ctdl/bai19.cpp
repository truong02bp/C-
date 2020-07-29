#include<iostream>
using namespace std;

int n,a[15],b[15];

void display(int n)
{
    cout <<"[";
    for (int i=0;i<n-1;i++)
        cout << a[i] <<" ";
    cout << a[n-1] <<"]" << endl;
}

void Try(int k)
{
    if (k <= 0)
        return ;
    display(k);
    for (int i=0;i<n-1;i++)
    {
        b[i] = a[i] + a[i+1];
        a[i] = b[i];
    }     
    Try(k-1);   
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i];
        Try(n);    
    }
    return 0;
}