#include<iostream>
using namespace std;

string s,rs;
bool check[100];

void in()
{
    for (int i=0;i<s.size();i++)
        cout << rs[i];
    cout <<" ";
}
void init()
{
    rs="";
    for (int i=0;i<s.length();i++)
        check[s[i]]=false;
}
void Try(int i)
{
    for (int j=0;j<s.length();j++)
        if (check[s[j]]==false)
        {
            rs[i]=s[j];
            check[s[j]]=true;
            if (i==s.length()-1)
                in();
            else
            {
                Try(i+1);
            }
            check[s[j]]=false;
        }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        init();
        Try(0);
        cout << endl;
    }
    return 0;
}