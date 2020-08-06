#include<iostream>
using namespace std;

int a[9][9],cot[30]={false},xuoi[30]={false},nguoc[30]={false},rs,tong;

void Try(int i)
{
    for (int j=1;j<=8;j++)
        if (cot[j]==false && xuoi[i-j+8]==false && nguoc[i+j-1]==false)
        {
            cot[j]=true;
            xuoi[i-j+8]=true;
            nguoc[i+j-1]=true;
            tong+=a[i][j];
            if (i == 8)
                rs = max(rs,tong);
            else 
                Try(i+1);    
            cot[j]=false;
            xuoi[i-j+8]=false;
            nguoc[i+j-1]=false;
            tong-=a[i][j];    
        }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i=1;i<=8;i++)
            for (int j=1;j<=8;j++)
                cin >> a[i][j];
        rs = 0;
        tong = 0;
        Try(1);
        cout << rs << endl;
    }
    return 0;
}