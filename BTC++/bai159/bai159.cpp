#include<iostream>
#include<vector>
using namespace std;

bool Check(string s1 , string s2);
string Resuilt(string s1 , string s2);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        cout << Resuilt(s1,s2) << endl;
    }
    return 0;
}
bool Check(string s1 , string s2)
{
    vector<int> a(27,0);
    for (int i=0;i<s1.length();i++)
        a[s1[i]-'a']++;
    for (int i=0;i<s2.length();i++)
        a[s2[i]-'a']--;
    for (int i=0;i<a.size();i++)
        if (a[i]<0)
            return false;
    return true;
}
string Resuilt(string s1 , string s2)
{
    string min=s1;
    int kt=0;
    for (int i=0;i<s1.length();i++)
    {
        string kq="";
        for (int j=i;j<s1.length();j++)
        {
            kq+=s1[j];
            if (Check(kq,s2)==true)
            {
                kt=1;
                if (kq.length() < min.length())
                    min=kq;
                break;
            }
        }
    }
    if (kt==0)
        return "-1";
    return min;
}