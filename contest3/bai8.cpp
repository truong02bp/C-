#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int a[2000],b[2000],n,cnt;

void nhap(int a[])
{
    for (int i=0;i<n;i++)
        cin >> a[i];
}

void Sort()
{
    for (int i=0;i<n;i++)
    {
        int kt=0;
        for (int j=0;j<n-1;j++)
            if (b[j] > b[j+1])
            {
                kt=1;
                swap(a[j+1],a[j]);
                swap(b[j+1],b[j]);
            }
        if (kt==0)
            break;
    }
}

void result()
{
    int time = b[0];
    for (int i=1;i<n;i++)
    {
        if (a[i] >= time)
        {
            cnt++;
            time = b[i];
        }    
    }
    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cnt=1;
        cin >> n;
        nhap(a);
        nhap(b);
        Sort();
        result();
    }
    return 0;
}