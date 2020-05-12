#include<iostream>
using namespace std;

int Resuilt(string s)
{
    int count=0;
    int i = s.find("100",0);
    while (i!=-1)
    {
        s.erase(i,3);
        count+=3;
        i = s.find("100",0);
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << Resuilt(s) << endl;
    }
    return 0;
}