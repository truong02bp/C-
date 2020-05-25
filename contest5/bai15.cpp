#include<iostream>
using namespace std;

string x,y,z;
int len1,len2,len3;

int f[105][105][105];

void result()
{
    for (int i=1;i<=len1;i++)
        for (int j=1;j<=len2;j++)
            for (int k=1;k<=len3;k++)
                if (x[i-1]==y[j-1] && x[i-1]==z[k-1])
                    f[i][j][k] = f[i-1][j-1][k-1]+1;
                else 
                    f[i][j][k] = max(f[i-1][j][k],max(f[i][j-1][k],f[i][j][k-1]));
    cout << f[len1][len2][len3] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> len1 >> len2 >> len3 >> x >> y >> z;
        result();
    }
    return 0;
}