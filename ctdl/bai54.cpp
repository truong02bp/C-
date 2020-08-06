#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;
vector<ll> a;

bool soSanh(string a , string b)
{
    int index=0;
    for (int i=0;i<a.length();i++)
        if (a[i]==b[index])
            index++;
    if (index == b.length())
        return true;
    return false;                
}
string toString(ll a)
{
    string rs="";
    while (a>0)
    {
        rs = (char)(a%10+'0') + rs;
        a/=10;
    }
    return rs;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        a.clear();
        cin >> n; 
        for (ll i=1;i*i*i<n;i++)
            a.push_back(i*i*i);     
        string s = toString(n);    
        int kt=0;
        for (int i=a.size()-1;i>=0;i--)
            if (soSanh(s,toString(a[i])))   
            {
                kt=1;
                cout << a[i] << endl;
                break;
            }   
        if (kt==0)    
            cout << -1 << endl;
    }
    return 0;
}