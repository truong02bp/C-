#include<iostream>
using namespace std;

char x[20];
int n,kt;

void solve()
{
    int i = n-1;
    while (x[i]=='B')
    {
        x[i]='A';
        i--;
    }
    if (i>=0)
        x[i]='B';
    else 
        kt=1;
}

void result()
{
    kt = 0;
    while (kt==0)
    {
        for (int i=0;i<n;i++)
            cout << x[i];
        cout <<" ";
        solve();
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
        for (int i=0;i<n;i++)
            x[i]='A';    
        result();    
    }
    return 0;
}