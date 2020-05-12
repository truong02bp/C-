#include<iostream>
using namespace std;

void Sinh(char x[] , int n , int &stop)
{
    int i = n-1;
    while (x[i]=='B')
    {
        x[i]='A';
        i--;
    }
    if (i<0) 
        stop=1;
    else
    {
        x[i]='B';
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int stop=0;
        cin >> n;
        char x[20];
        for (int i=0;i<n;i++)
            x[i]='A';
        while (stop==0)
        {
            for (int i=0;i<n;i++)
                cout <<x[i];
            Sinh(x,n,stop);
            cout <<" ";
        }
        cout << endl;
    }
    return 0;
}