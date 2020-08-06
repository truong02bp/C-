#include<iostream>
using namespace std;

int n,c[20][20],rs=9999999,x[20],sum=0,temp=99999;
bool check[20]={false};
void Try(int i)
{
    for (int j=2;j<=n;j++)
        if (check[j]==false)
        {
            x[i]=j;
            sum+=c[x[i-1]][j];
            check[j]=true;
            if (i == n)
                rs = min(rs,sum+c[j][1]);
            else 
                if (sum + (n-i+1)*temp < rs)
                    Try(i+1);
           sum-=c[x[i-1]][j];
           check[j]=false;             
        }
}

int main()
{
    cin >> n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
        {
            cin >> c[i][j];
            if (c[i][j]!=0)
                temp = min(temp,c[i][j]);
        }
    x[1]=1;
    Try(2);
    cout << rs << endl;
    return 0;     
}