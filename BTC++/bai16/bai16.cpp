#include<iostream>
using namespace std;

void Display(int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Display(n);
        cout << endl;
    }
    return 0;
}

void Display(int n)
{
    int luythua=0,i=2;
    while (n>1)
    {
        while (n%i==0)
        {
            luythua++;
            n/=i;
        }
        if (luythua > 0)
            cout << i <<" " << luythua <<" ";
        luythua=0;
        i++;
    }
}