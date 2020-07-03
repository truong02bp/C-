#include<iostream>
using namespace std;

int n,a[10005],pre=0;

void post(int Min , int Max)
{
    if (pre == n)
        return ;
    if (Min > a[pre] || Max < a[pre])
        return ;
    int val = a[pre];
    pre++;
    post(Min,val);
    post(val,Max);
    cout << val <<" ";        
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        pre=0;
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i];
        post(INT16_MIN,INT16_MAX);
        cout << endl;    
    }
    return 0;
}