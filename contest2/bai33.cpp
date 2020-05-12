#include<iostream>
using namespace std;

bool cot[30]={false} , xuoi[30]={false} , nguoc[30]={false};
int n,cnt=0;

void Try(int i)
{
    for (int j=1;j<=n;j++)
    {
        if (cot[j]==false && xuoi[i-j+n]==false && nguoc[i+j-1]==false)
        {
            cot[j]=true;
            xuoi[i-j+n]=true;
            nguoc[j+i-1]=true;
            if (i==n)
                cnt++;
            else 
                Try(i+1);
            cot[j]=false;
            xuoi[i-j+n]=false;
            nguoc[j+i-1]=false;
        }
    }
}

int main()
{
    cin >> n;
    Try(1);
    cout << cnt;
    return 0;
}
