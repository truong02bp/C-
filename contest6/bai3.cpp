#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int n;
pair<int,int> a[1005];
int check[1005];

void result()
{
    memset(check,0,sizeof(check));
    int cnt=0;
    sort(a,a+n);
    for (int i=0;i<n;i++)
    {
        if (check[i]==0 && a[i].second !=i)
        {
            int temp=0,j=i;
            while (check[j]==0)
            {
                check[j]=1;
                j = a[j].second;
                temp++;
            }
            if (temp > 0)
                cnt +=(temp-1);
        }
    }
    cout << cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        result();
        cout << endl;
    }
    return 0;
}