#include<iostream>
using namespace std;

int Display(int n , int k);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        cout << Display(n,k) << endl;
    }
    return 0;
}
int Display(int n , int k)
{
    int i=2,sl=0;
    while (n>1)
    {
        while (n%i==0)
        {
            sl++;
            n/=i;
            if (sl==k) return i;
        }
        i++;
    }
    return -1;
}