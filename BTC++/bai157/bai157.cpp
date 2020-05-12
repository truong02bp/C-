#include<iostream>
using namespace std;

string SoSanh(string a , string b)
{
    if (a.length() > b.length())
        return a;
    if (a.length() < b.length())
        return b;
    int i=0;
    while (i<a.length())
    {
        if ((a[i]-'0')>(b[i]-'0'))
            return a;
        if ((a[i]-'0')<(b[i]-'0'))
            return b;
        i++;
    }
    return a;
}
string Max(string s)
{
    string max="";
    int i=0;
    while (i<s.length())
    {
        int a = s[i]-'0';
        if (a>=0 && a<=9)
        {
            string temp="";
            temp+=s[i];
            int j=i+1;
            while ((s[j]-'0')>=0 && (s[j]-'0')<=9)
            {
                temp+=s[j];
                j++;
            }
            i=j;
            max = SoSanh(max,temp);
        }
        else
        {
            i++;
        }
    }
    return max;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << Max(s) << endl;
    }
    return 0;
}