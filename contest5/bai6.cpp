#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
string s;
int f[1005][1005];

void result()
{
    memset(f,0,sizeof(f));
    int len = s.length(),ans=1;
    for (int i=0;i<len;i++)
        f[i][i]=1;
    for (int k=1;k<len;k++)
        for (int i=0;i<len-k;i++)
        {
            int j = i+k;
            if (s[i]==s[j])
            {
                if (k==1)
                    f[i][j]=1;
                else 
                    f[i][j] = f[i+1][j-1];
            }
            else 
                f[i][j]=0;
            if (f[i][j]==1)
                ans = max(ans,j-i+1);
        }
    cout << ans << endl;
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