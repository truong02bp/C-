#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string Sort(string s)
{
    sort(s.begin(),s.end());
    string kq="";
    int sum=0;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]>='0' && s[i] <='9')
            sum+= s[i]-'0';
        else
        {
            kq+=s[i];
        }
    }
    kq+='0'+sum;
    return kq;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << Sort(s) << endl;
    }
    return 0;
}
