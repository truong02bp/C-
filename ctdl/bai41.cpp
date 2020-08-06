#include<iostream>
using namespace std;

int n,a[10]={1,2,5,10,20,50,100,200,500,1000},cnt;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cnt=0;
        cin >> n;
        for (int i=9;i>=0;i--)
            if (n >= a[i])
            {
                cnt+= n/a[i];
                n-= n/a[i]*a[i];
            }
        cout << cnt << endl;
    }
    return 0;
}