#include<iostream>
#include<algorithm>
using namespace std;

string s1,s2;

void result()
{
    int f[105][105];
    for (int i=0;i<=s1.length();i++)
        f[i][0]=i;
    for (int j=0;j<=s2.length();j++)
        f[0][j]=j;
    for (int i=1;i<=s1.length();i++)
        for (int j=1;j<=s2.length();j++)
            if (s1[i-1]==s2[j-1])
                f[i][j] = f[i-1][j-1];
            else 
                f[i][j] = min(f[i-1][j-1],min(f[i-1][j],f[i][j-1]))+1;
    cout << f[s1.length()][s2.length()] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s1 >> s2;
        result();
    }
    return 0;
}