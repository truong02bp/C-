#include<iostream>
#include<vector>
using namespace std;

int n;
string s;
vector<string> a;

typedef long long ll;

void convert(string s)
{
    int i=0;
    while (i < s.length())
    {
        string temp="";
        while (s[i] !=' ' && i < s.length())
        {
            temp+=s[i];
            i++;
        }
        i++;
        a.push_back(temp);
    }
}
ll toNumber(string a)
{
    int index;
    if (a[0] == '-')
        index=1;
    else 
        index=0;    
    ll rs=0;
    for (int i=index;i<a.length();i++)
        rs = rs*10 + (a[i]-'0');
    if (a[0] =='-')
        return -rs;     
    return rs;
}
string tinhToan(string a , string b , string o)
{
    ll x = toNumber(a);
    ll y = toNumber(b);
    if (o =="+")
        return to_string(x+y);
    if (o =="-")
        return to_string(x-y);    
    if (o =="*")
        return to_string(x*y);
    if (o =="/")
        return to_string(x/y);        
}
void result()
{
    int i = a.size()-1;
    while (i>0)
    {
        string y = a[i--];
        string x = a[i--];
        a[i/2] = tinhToan(x,y,a[i/2]);
    }
    cout << a[0] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin.ignore();
        getline(cin,s);
        a.clear();
        convert(s);
        result();
    }
    return 0;
}