#include<iostream>
#include<vector>
using namespace std;
bool check[100001];

void SangNguyenTo();

int Counter(long long l , long long r);

int main()
{
    int t;
    cin >> t;
    SangNguyenTo();
    while (t--)
    {
        long long l,r;
        cin >> l >> r;
        cout << Counter(l,r) << endl;
    }
    return 0;
}
void SangNguyenTo()
{
    long long i,j;
    check[0]=false;
    check[1]=false;
    for (i=2;i<=100000;i++)
        check[i]=true;
    for (i=2;i<=100000;i++)
        if (check[i]==true)
        {
            for (j=i*i;j<=100000;j+=i)
                check[j]=false;
        }
}
int Counter(long long l , long long r)
{
    int counter=0;
    for (int i=l;i<=r;i++)
        if (check[i]==true)
            counter++;
    return counter;
}