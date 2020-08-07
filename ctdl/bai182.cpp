#include<bits/stdc++.h>
using namespace std;

int a[100][100];
int n;
string s;

int toNumber(string s)
{
    int rs=0;
    for (int i=0;i<s.length();i++)
        rs = rs*10 + (s[i]-'0');
    return rs;    
}

int main()
{
    memset(a,0,sizeof(a));
    cin >> n;
    cin.ignore();
    for (int i=1;i<=n;i++)
    {
        getline(cin,s);
        for(int j=0;j<s.length();j++)
        {
            string temp="";
            while(s[j]>='0' && s[j]<='9' && j<s.length())
            {
                temp+=s[j];
                j++;
            }
            if (temp!="")
            {
                int tmp = toNumber(temp);
                a[i][tmp]=1;
                a[tmp][i]=1;
            }
        }
    }
    for (int i=1;i<=n;i++)
        for (int j=i+1;j<=n;j++)
            if (a[i][j]==1)
                cout << i << " " << j << endl;
    return 0;
}