#include<iostream>
using namespace std;

bool check[10001];

void SangNguyenTo();
void CapNguyenTo(int n);

int main()
{
    int t;
    cin >> t;
    SangNguyenTo();
    while (t--)
    {
        int n;
        cin >> n;
        CapNguyenTo(n);
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
void CapNguyenTo(int n)
{
    int i;
    for (i=2;i<=n/2;i++)
        if (check[i]==true)
        {
            if (check[n-i]==true) 
            {
                cout << i <<" " <<n-i;
                break;
            }
        }
}