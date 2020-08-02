#include<iostream>
using namespace std;

string s,rs;
bool check[100];

void Try(int i)
{
    for (int j=0;j<s.length();j++)
        if (check[s[j]]==false)
        {
            check[s[j]]=true;
            rs[i]=s[j];
            if (i == s.length()-1)
            {
                for (int k=0;k<s.length();k++)
                    cout << rs[k];
                cout <<" ";    
            }
            else 
                Try(i+1);
            check[s[j]]=false;    
        }
}
void result()
{
    for (int i=0;i<s.length();i++)
        check[s[i]]=false;
    rs="";    
    Try(0);
    cout << endl;
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