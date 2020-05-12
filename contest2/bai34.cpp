#include<iostream>
using namespace std;

int a[10][10],fopt,sum;
bool cot[30]={false} , nguoc[30] = {false} , xuoi[30] = {false};

void Try(int i)
{
    for (int j=1;j<=8;j++)
        if (cot[j]==false && xuoi[i-j+8]==false && nguoc[i+j-1]==false)
        {
            cot[j] = true;
            xuoi[i-j+8] = true;
            nguoc[i+j-1] = true;
            sum+=a[i][j];
            if (i==8)
            {
                if (sum > fopt)
                    fopt = sum;
            }
            else 
                Try(i+1);
            cot[j] = false;
            xuoi[i-j+8] = false;
            nguoc[i+j-1] = false;
            sum-=a[i][j];
        }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        fopt=0 , sum=0;
        for (int i=1;i<=8;i++)
            for (int j=1;j<=8;j++)
                cin >> a[i][j];
        Try(1);
        cout << fopt << endl;
    }
    return 0;
}