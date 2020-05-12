#include<iostream>
using namespace std;

bool ChiaHet(string n)
{
    int temp=0;
    for (int i=0;i<n.length();i++)
    {
        temp = (temp*10 + (n[i]-'0'))%11;
    }
    return temp==0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        if (ChiaHet(n)==true)
            cout <<"1" << endl;
        else
        {
            cout <<"0" << endl;
        }
        
    }
    return 0;
}