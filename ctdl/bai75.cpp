#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

string s1,s2;

ll toThapPhan(string s1)
{
    ll rs=0;
    ll j=1;
    for (int i=s1.length()-1;i>=0;i--)
    {
        if (s1[i]=='1')
            rs+=j;
        j*=2;    
    }
    return rs;
}

ll result()
{
    return toThapPhan(s1)*toThapPhan(s2);
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> s1 >> s2;
        cout << result() << endl;
    }
    return 0;
}