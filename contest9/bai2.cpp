#include<iostream>
#include<string.h>
using namespace std;

int n,a[100][100];
string s;

int toNumber(string temp)
{
    int rs=0;
    for (int i=0;i<temp.length();i++)
        rs = rs*10 + temp[i]-'0';
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
        int j=0;
        while (j < s.length())
        {
            string temp="";
            while (s[j]!=' ' && j < s.length())
            {
                temp+=s[j];
                j++;
            }
            if (temp!="")
            {
                int tmp = toNumber(temp);
                if (a[tmp][i]==0)
                    a[i][tmp]=1;
            }    
            j++;
        }
    }
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            if (a[i][j]!=0 && i!=j)
                cout << i <<" " << j << endl;
    return 0;    
}
