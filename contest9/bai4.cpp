#include<iostream>
#include<string.h>
using namespace std;

int n,a[1005][1005];
string s;

int toNumber(string temp)
{
    int rs = 0;
    for (int i=0;i<temp.length();i++)
        rs = rs * 10 + temp[i]-'0';
    return rs;
}

int main()
{
    cin >> n;
    cin.ignore();
    memset(a,0,sizeof(a));
    for (int i=1;i<=n;i++)
    {
        getline(cin,s);
        int j = 0;
        while (j<s.length())
        {
            string temp="";
            while (s[j]!=' ' && j < s.length())
            {
                temp+=s[j];
                j++;
            }
            if (temp!="")
                a[i][toNumber(temp)]=1;
            j++;
        }
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
            cout << a[i][j] <<" ";
        cout << endl;
    }
    return 0;
}