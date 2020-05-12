#include<iostream>
using namespace std;

int Timx(int n , int p);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,p;
        cin >> n >> p;
        cout << Timx(n,p) << endl;
    }
    return 0;
}
int Timx(int n , int p)
{
    int counter=0,i,x;
    for (i=p;i<=n;i+=p) // xet cac so chia het cho p
    {
        x=i;
        while (x%p==0) // moi lan chia het cho p thi tang len 1
        {
            counter++;
            x/=p;
        }
    }
    return counter;
}