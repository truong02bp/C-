#include<iostream>
using namespace std;

bool check[100000];

void SangNguyenTo();

int main()
{
    int t;
    cin >> t;
    SangNguyenTo();
    while (t--)
    {
        int m,n;
        cin >> m >> n;
        for (int i=m;i<=n;i++)
        if (check[i]==true)
            cout << i <<" ";
        cout << endl;
    }
    return 0;
}

void SangNguyenTo()
{
    int i;
    check[0]=false;
    check[1]=false;
    for (i=2;i<=10000;i++)
        check[i]=true;
    for (i=2;i<=10000;i++)
        if (check[i]==true)
        {
            for (int j=i*i;j<=10000;j+=i)
                check[j]=false;
        }
}