#include<iostream>
using namespace std;

int DemTu(string s);
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    { 
        string s;
        getline(cin,s);
        cout << DemTu(s) << endl;
    }
    return 0;
}
int DemTu(string s)
{
    int counter=0;
    for (int i=0;i<s.length();i++)
        if ((s[i]!='\n' && s[i]!='\t' && s[i]!=' ') && (s[i+1]==' ' || s[i+1]=='\t' || s[i+1]=='\n' || s[i+1]=='\0'))
            counter++;
    return counter;
}