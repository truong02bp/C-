#include<iostream>
using namespace std;

bool check[100000];
void SangNguyenTo();
int  USNT(int n);

int main()
{
    int t;
    cin >> t;
    SangNguyenTo();
    while (t--)
    {
        int n;
        cin >> n;
        for (int i=1;i<=n;i++)
            cout << USNT(i) <<" ";
        cout << endl;
    }
    return 0;
}

void SangNguyenTo()
{
    int i,j;
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
int USNT(int n)
{
    if (check[n]==true) return n;
    if (n==1) return 1;
    if (n%2==0) return 2;
    for (int i=2;i<n;i++)
        if (check[i]==true)
        {
            if (n%i==0) return i;
        }
}