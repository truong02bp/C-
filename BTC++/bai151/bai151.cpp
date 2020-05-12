#include<iostream>
using namespace std;

bool ChiaHet(string n)
{
    int temp=0;
    for (int i=0;i<n.size();i++)
    {
        temp = (temp*2 + (n[i]-'0'))%5;
    }
    return (temp==0);
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
            cout <<"YES" << endl;
        else
        {
            cout <<"NO" << endl;
        }
    }
    return 0;
}