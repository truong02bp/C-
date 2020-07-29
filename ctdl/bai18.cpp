#include<iostream>
#include<algorithm>
using namespace std;

int n,s,a[50],rs,kt,cnt;
bool check[50];
void Try()
{
    if (s < 0 || cnt >= rs)
        return ;
    for (int i=n-1;i>=0;i--)
        if (check[i]==false)
        {
            check[i] = true;
            s-=a[i];
            cnt++;
            if (s == 0)
            {
                kt = 1;
                rs = min(rs,cnt);
            }
            else 
                Try();
            s+=a[i];
            check[i]=false;
            cnt--;    
        }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        for (int i=0;i<n;i++)
        {
            cin >> a[i];
            check[i] = false;
        }
        sort(a,a+n);
        rs = n , kt=0 , cnt = 0;
        Try();
        if (kt==0)
            cout << -1 << endl;
        else 
            cout << rs << endl;    
    }
    return 0;
}