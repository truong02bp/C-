#include<iostream>
using namespace std;

bool DieuKien(string n)
{
    int temp=0,tong=0;
    for (int i=0;i<n.size();i++)
    {
        temp = (temp*10 + (n[i]-'0'))%8;
        tong+=(n[i]-'0');
    }
    return (temp==0 && tong%3!=0);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int counter=0;
        for (int i=0;i<n.size();i++)
        {
            string temp="";
            temp+=n[i];
            if (DieuKien(temp)==true)
                counter++;
            for (int j=i+1;j<n.size();j++)
            {
                temp+=n[j];
                if (DieuKien(temp)==true)
                    counter++;
            }
        }
        cout << counter << endl;
    }
    return 0;
}