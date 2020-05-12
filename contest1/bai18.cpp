#include<iostream>
#include<algorithm>
using namespace std;

int n,kt=0;
long long s,cnt=0,rs,a[100];
bool check[100]={false};
void Try(int i , int s)
{
    for (int j=0;j<n;j++)
        if (check[j]==false)
        {
            s-=a[j];
            check[j]=true;
            if (i < rs && s >=0)
            {
                if (s==0)
                {
                    rs = i;
                    kt=1;
                }
                else 
                    Try(i+1,s);
            }
            s+=a[j];
            check[j]=false;
        }
}

int main()
{
    cin >> n >> s;
    rs = s;
    for (int i=0;i<n;i++)
        cin >> a[i];
    Try(1,s);
    if (kt==1)
        cout << rs;
    else   
        cout << -1;
    return 0;
}
  