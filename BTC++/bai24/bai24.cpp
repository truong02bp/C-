#include<iostream>
#include<math.h>
using namespace std;
bool *check;

int DemSo(long long l , long long r);
void Test();
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l , r;
        cin >> l >> r;
        cout << DemSo(l,r) << endl;
    }
    return 0;
}
int DemSo(long long l , long long r)
{
    check = new bool[1000001];
    check[0]=false;
    check[1]=false;
    long long i,j;
    for (i=2;i*i<=r;i++)
        check[i]=true;
    for (i=2;i*i<=r;i++)
        if (check[i]==true)
        {
            for (j=i*i;j<=1000000;j+=i)
                check[j]=false;
        }
    int sum=0;
    for (i=sqrt(l);i<=sqrt(r);i++) // Nó là số có 3 ước số khi nó là bình phương của 1 số nguyên tố
        if (check[i]==true)
            sum++;
    return sum;
}



































/* Cach 2 : Cham hon
bool CheckNto(int n);
int DemSo(long long l , long long r);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l,r;
        cin >> l >> r;
        cout << DemSo(l,r) << endl;
    }
    return 0;
}
bool CheckNto(int n)
{
    if (n<2) return false;
    for (int i=2;i<=sqrt(n);i++)
        if (n%i==0) return false;
    return true;
}
int DemSo(long long l , long long r)
{
    long long i;
    int sum=0;
    for (i=sqrt(l);i<=sqrt(r);i++)
        if (CheckNto(i)==true)
            sum++;
    return sum;
}
*/

