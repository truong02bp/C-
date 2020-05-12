#include<iostream>
using namespace std;

void SangNguyenTo(bool check[]);
void Display(long long n , bool check[]);

int main()
{
    int t;
    cin >> t;
    bool *check;
    check = new bool[10001];
    SangNguyenTo(check);
    while (t--)
    {
        long long n;
        cin >> n;
        Display(n,check);
    }
    return 0;
}
void SangNguyenTo(bool check[])
{
    long long i,j;
    check[0]=false;
    check[1]=false;
    for (i=2;i<=10000;i++)
        check[i]=true;
    for (i=2;i<=10000;i++)
        if (check[i]==true)
        {
            for (j=i*i;j<=10000;j+=i)
                check[j]=false;
        }
}
void Display(long long n , bool check[])
{
    for (long long i=2;i<=n;i++)
        if (check[i]==true)
            cout << i << " ";
    cout << endl;
}