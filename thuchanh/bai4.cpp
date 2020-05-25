#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
string s,temp;
vector<string> rs;

void Try(int i)
{
    for (int j=i+1;j<s.length();j++)
    {
        temp+=s[j];
        rs.push_back(temp);
        if (i==s.length()-1)
            return ;
        else 
            Try(j);
        temp.erase(temp.length()-1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        rs.clear();
        temp="";
        cin >> n >> s;
        for (int i=0;i<n;i++)
        {
            temp+=s[i];
            rs.push_back(temp);
            Try(i);
            temp="";
        }
        for (int i=0;i<rs.size();i++)
            cout << rs[i] <<" ";
    }
}
