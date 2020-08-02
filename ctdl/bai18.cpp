#include<iostream>
#include<algorithm>
using namespace std;

int n,s,a[50],rs,kt,tong;
bool check[50];
void Try(int k)
{
    if (s < 0)
        return ;
    if (k >= rs)
        return ;    
    if (s > tong)
        return ;    
    for (int i=0;i<n;i++)
        if (check[i]==false)
        {
            check[i] = true;
            s-=a[i];
            tong-=a[i];
            if (s == 0)
            {
                kt = 1;
                rs = min(rs,k);
            }
            else 
                Try(k+1);
            s+=a[i];
            tong+=a[i];
            check[i]=false;    
        }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        tong=0;
        cin >> n >> s;
        for (int i=0;i<n;i++)
        {
            cin >> a[i];
            tong+=a[i];
            check[i] = false;
        }
        rs = n , kt=0;
        Try(1);
        if (kt==0)
            cout << -1 << endl;
        else 
            cout << rs << endl;    
}
    return 0;
}