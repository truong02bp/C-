#include<iostream>
using namespace std;

bool check[1001];
void SangFibo();

int main()
{
    int t;
    cin >> t;
    SangFibo();
    while (t--)
    {
        int n,a[100];
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i];
        for (int i=0;i<n;i++)
            if (check[a[i]]==true)
                cout << a[i] <<" ";
        cout << endl;
    }
    return 0;
}
void SangFibo()
{
    check[0]=true;
    check[1]=true;
    int i;
    for (i=2;i<=1000;i++)
        check[i]=false;
    int a[1001];
    a[0]=0;
    a[1]=1;
    i=2;
    while (a[i-1]<=1000)
    {
        a[i]=a[i-1]+a[i-2];
        check[a[i]]=true;
        i++;
    }
}
