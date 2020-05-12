#include<iostream>
using namespace std;

void SangNguyenTo(bool check[]);
void Display(long long n , bool check[]);
int main()
{
    int t;
    cin >> t;
    bool *check;
    check = new bool[1000001];
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
    check[0]=false;
    check[1]=false;
    for (long long i=2;i<=1000000;i++)
        check[i]=true;
    for (long long i=2;i<=1000000;i++)
        if (check[i]==true)
        {
            for (long long j=i*i;j<=1000000;j+=i)
                check[j]=false;
        }
}
void Display(long long n , bool check[])
{
    int kt=0;
    for (long long i=2;i<=n/2;i++)
        if (check[i]==true)
        {
            if (check[n-i]==true)
            {
                kt =1;
                cout << i <<" " << n-i << endl;
                break;
            }
        }
    if (kt==0)
        cout <<"-1" << endl;
}