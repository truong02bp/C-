#include<iostream>
#include<vector>
using namespace std;

int n,k,a[30],b[30],cnt,sum,sum1;
bool check[100];
bool check2[100];
void Try(int i)
{
    for (int j=0;j<=1;j++)
    //    if (check[i]==false)
        {
            b[i] = j;
            sum1+= b[i] * a[i];
        //    check[i]=true;
            if (i==n)
            {
                if (sum1==sum/k)
                {
                    int kt=0;
                    for (int t=1;t<=n;t++)
                        if (b[t]==1)
                        {
                            if (check2[t]==true)
                            {
                                kt=1;
                                break;
                            }
                        }
                    if (kt==0)
                    {
                        cnt++;
                        for (int t=1;t<=n;t++)
                            if (b[t]==1)
                                check2[t]=true;
                    }
                }
            }
            else
            {
                Try(i+1);
            }
            sum1-=b[i] * a[i];
         //   check[i]=false;
        }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i=1;i<=100;i++)
        {
            check[i]=false;
            check2[i]=false;
        }
        sum=0,sum1=0;
        cin >> n >> k;
        for (int i=1;i<=n;i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
        if (sum%k!=0)
            cout <<"0";
        else
        {
            cnt=0;
            Try(1);
            if (cnt==k)
                cout <<"1";
            else 
                cout <<"0";
        }
        cout << endl;
    }
    return 0;
}