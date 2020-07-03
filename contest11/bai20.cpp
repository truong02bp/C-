#include<iostream>
using namespace std;

int n,a[1005];

int isInOrder()
{
    for (int i=0;i<n-1;i++)
        if (a[i] >= a[i+1])
            return 0;
    return 1;        
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
        cout << isInOrder() << endl;    
    }
    return 0;
}