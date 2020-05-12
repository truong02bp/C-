#include<iostream>
#include<algorithm>
using namespace std;

int s1,s2,s3;
string x,y,z;
int a[105][105][105];

void result()
{
    for (int i=1;i<=s1;i++)
        for (int j=1;j<=s2;j++)
            for (int k=1;k<=s3;k++)
                if (x[i-1]==y[j-1] && x[i-1]==z[k-1])
                    a[i][j][k] = a[i-1][j-1][k-1]+1;
                else 
                    a[i][j][k] = max(max(a[i-1][j][k],a[i][j-1][k]),a[i][j][k-1]);
    cout << a[s1][s2][s3] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s1 >> s2 >> s3;
        cin.ignore();
        cin >> x >> y >> z;
        result();
    }
    return 0;
}