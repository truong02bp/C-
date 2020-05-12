#include<iostream>
using namespace std;

bool Check(string s)
{
    if (s.length()==1)
        return true;
    if (s[0]==s[s.length()-1])
        return true;
    return false;
}
long long Counter(string s)
{
    int counter=0;
    for (int i=0;i<s.length();i++)
    {
        string kq="";
        kq+=s[i];
        counter++;
        for (int j=i+1;j<s.length();j++)
        {
            kq+=s[j];
            if (Check(kq)==true)
                counter++;
        }
    }
    return counter;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << Counter(s)<< endl;
    }
    return 0;
}