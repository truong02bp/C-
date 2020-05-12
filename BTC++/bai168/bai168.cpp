#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    char x[1];
    gets(x);
    while (t--)
    {
        char s[10001];
        gets(s);
        char *a = strtok(s," ");
        vector<char*> b;
        string rs="";
        while (a!='\0')
        {
            b.push_back(a);
            a = strtok('\0'," ");
        }
        int i;
        for ( i=b.size()-1;i>0;i--)
        {
            rs+=b[i];
            rs+=" ";
        }
        rs+=b[i];
        cout << rs << endl;
    }
    return 0;
}