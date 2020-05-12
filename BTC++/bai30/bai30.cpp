#include<iostream>
//#include<fstream>
using namespace std;

long long SoDu(string n , long long m);

int main()
{
//    ifstream in("input30.txt",ios::in);
//    ofstream out("output30.txt",ios::out);
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        long long m;
        cin >> n >> m;
        cout << SoDu(n,m) << endl;
    }
    return 0;
}

long long SoDu(string n , long long m)
{
    long long SoDu=0;
    int i=0;
    for (i=0;i<n.length();i++)
        SoDu = (SoDu*10 + (n[i]-'0'))%m;
    return SoDu;
}
