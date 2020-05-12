#include<iostream>
#include<algorithm>
using namespace std;

string s;

void result()
{
    int f[50]={0};
    if (s[0]=='0')
        cout << 0 << endl;
    else 
    {
        f[0]=1,f[1]=1;
        for (int i=2;i<=s.length();i++)
        {
            if (s[i-1]!='0')
                f[i] = f[i-1];
            if (s[i-2]=='1' || (s[i-2]=='2' && s[i-1]<'7'))
                f[i]+=f[i-2];
        }
        cout << f[s.length()] << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        result();
    }
    return 0;
}