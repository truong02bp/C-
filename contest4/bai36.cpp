#include<iostream>
using namespace std;

typedef long long ll;

string a,b;

ll toThapPhan(string s)
{
    int j=1;
    ll rs = 0;
    for (int i=s.length()-1;i>=0;i--)
    {
        rs+= (s[i]-'0')*j;
        j*=2;
    }
    return rs;
}

void result()
{
    cout << toThapPhan(a)*toThapPhan(b) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        result();
    }
    return 0;
}