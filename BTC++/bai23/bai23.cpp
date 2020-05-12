#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

bool *check = new bool[10000001];

void SangNguyenTo();
int Counter(long long n);
int main()
{
    int t;
    cin >> t;
    SangNguyenTo();
    while (t--)
    {
        long long n;
        cin >> n;
        cout << Counter(n) << endl;
    }
    return 0;
}
void SangNguyenTo()
{
    check[0]=false;
    check[1]=false;
    long long i,j;
    for (i=2;i<=1000000;i++)
        check[i]=true;
    for (i=2;i<=1000000;i++)
        if (check[i]==true)
        {
            for (j=i*i;j<=1000000;j+=i)
                check[j]=false;
        }
}
int Counter(long long n)
{
    int counter=0;
    for (long long i=2;i*i<=n;i++)
        if (check[i]==true)
            counter++;
    return counter;
}
