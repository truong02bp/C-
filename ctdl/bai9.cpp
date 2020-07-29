
#include<iostream>
using namespace std;

int a[15],b[15],n;

void result()
{
    for (int i=1;i<=n;i++)
        cout << b[i];
    cout <<" ";    
}
void Try(int i)
{
    for (int j=0;j<2;j++)
    {
        a[i] = j;
        b[i] = a[i]^a[i-1];
        if (i==n)
            result();
        else 
            Try(i+1);
    }
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Try(1);
        cout << endl;
    }
    return 0;
}