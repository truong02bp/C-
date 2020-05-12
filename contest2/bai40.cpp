#include<iostream>
#include<vector>
using namespace std;
//vector<bool> check(100,false);
int n,c[100][100],x[100],fopt=999999,sum=0,temp=999999;
bool check[100] = { false };
void Try(int i)
{
    for (int j=2;j<=n;j++)
        if (check[j]==false)
        {
            x[i] = j;
            sum+=c[x[i-1]][x[i]];
            check[j]=true;
            if (i==n)
            {
                if ((sum + c[x[i]][1]) < fopt)
                    fopt = sum + c[x[i]][1];
            }
            else 
                if ((sum + (n-i+1)*temp) < fopt)
                    Try(i+1);
            check[j]=false;
            sum-=c[x[i-1]][x[i]];
        }
}

int main()
{
    cin >> n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
        {
            cin >> c[i][j];
            if (c[i][j] < temp && c[i][j]!=0)
                temp = c[i][j];
        }
    x[1]=1;
    Try(2);
    cout << fopt;
    return 0;
}
