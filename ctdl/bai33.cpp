#include<iostream>
using namespace std;

int n,cot[20]={false},xuoi[20]={false},nguoc[20]={false},cnt;

void Try(int i)
{
    for (int j=1;j<=n;j++)
        if (cot[j]==false && xuoi[i-j+n]==false && nguoc[i+j-1]==false)
        {
            cot[j]=true;
            xuoi[i-j+n]=true;
            nguoc[i+j-1]=true;
            if (i == n)
                cnt++;
            else 
                Try(i+1);
            cot[j]=false;
            xuoi[i-j+n]=false;
            nguoc[i+j-1]=false;        
        }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cnt=0;
        cin >> n;
        Try(1);
        cout << cnt << endl;
    }
    return 0;
}