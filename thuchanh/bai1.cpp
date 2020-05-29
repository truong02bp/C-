#include<iostream>
using namespace std;

int n,k,a[1005];

bool ktra()
{
    for (int i=1;i<=k;i++)
        if (a[i]!=i)
            return true;
    return false;
}

void result()
{
    int rs[1005];
    if (ktra()==false)
    {
        for (int i=1;i<=k;i++)
            cout << n-k+i <<" ";
        cout << endl;
    }
    else 
    {
        int i=k;
        while (a[i] == a[i-1]+1)
            i--;
        a[i]--;
        for (int j=i+1;j<=k;j++)
            a[j] = n-k+j;
        for (int i=1;i<=k;i++)
            cout << a[i] <<" ";
        cout << endl;
    }
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