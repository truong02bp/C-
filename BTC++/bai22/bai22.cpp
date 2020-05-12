#include<iostream>
using namespace std;

int Uoc(int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i=1;i<=n;i++)
            cout << Uoc(i) << " ";
        cout << endl;
    }
    return 0;
}

int Uoc(int n)
{
    if (n==1) return 1;
    int i=2;
    while (n>1)
    {
        while (n%i==0)
        {
            return i;
        }
        i++;
    }
    return -1;
}