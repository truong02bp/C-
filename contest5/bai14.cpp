#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

string s;
int len,f[105][105];

void result()
{
    memset(f,0,sizeof(f));
    for (int i=1;i<=len;i++)
        for (int j=1;j<=len;j++)
            if (s[i-1] == s[j-1] && i!=j)
                f[i][j] = f[i-1][j-1]+1;
            else 
                f[i][j] = max(f[i-1][j],f[i][j-1]);
    cout << f[len][len] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> len >> s;
        result();
    }
    return 0;
}