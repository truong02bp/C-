#include<iostream>
using namespace std;

int n,k,a[100],b[100],sum,tong,cnt;
bool check[100];

bool ktra()
{
    for (int i=0;i<n;i++)
        if (b[i]==1)
        {
            if (check[i]==true)
                return false;
        }
    return true;    
}

void Try(int i)
{
    for (int j=0;j<2;j++)
    {
        b[i] = j;
        tong+=j*a[i];
        if (i==n-1)
        {
            if (tong==sum/k)
                if (ktra()==true)
                {
                    cnt++;
                    for (int j=0;j<n;j++)
                        if (b[j]==1)
                            check[j]=true;
                }
        }
        else 
            Try(i+1);
        tong-=b[i]*a[i];
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sum = 0;
        tong = 0,cnt=0;
        cin >> n >> k;
        for (int i=0;i<n;i++)
        {
            cin >> a[i];
            sum+=a[i];
            check[i]=false;
        }
        if (sum%k!=0)
            cout << 0;
        else 
        {
            Try(0);   
            if (cnt == k)
                cout << 1;
            else 
                cout << 0;       
        }
        cout << endl;
    }
    return 0;
}