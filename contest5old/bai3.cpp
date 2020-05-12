#include<iostream>
using namespace std;

int n,s,a[300];

void result()
{
    int check[40005]={false};
    check[0]=true;
    for (int i=1;i<=n;i++)
        for (int j=s;j>=a[i];j--)
            if (check[j]==false && check[j-a[i]]==true)
                check[j]=true;
    if (check[s]==true)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        for (int i=1;i<=n;i++)
            cin >> a[i];
        result();
    }
    return 0;
}