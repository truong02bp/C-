#include<iostream>
#include<algorithm>
using namespace std;

int a[1005][1005];
string s1,s2;

void result()
{
    int rs = 0;
    for (int i=1;i<=s1.length();i++)
        for (int j=1;j<=s2.length();j++)
            if (s1[i-1] == s2[j-1])
                a[i][j] = a[i-1][j-1]+1;
            else 
                a[i][j] = max(a[i-1][j] , a[i][j-1]);
    cout << a[s1.length()][s2.length()] << endl;
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