#include<bits/stdc++.h>
using namespace std;

int d;
string s;
vector<int> cnt;

bool cmp(int a, int b)
{
    return a > b;
}

bool solve()
{
    sort(cnt.begin(),cnt.end(),cmp);
    int i=0;
    while(cnt[i]!=0)
    {
        int p = cnt[i];
        for (int j=0;j<p;j++)
            if (i+j*d >= s.length())
                return false;
        i++;        
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cnt.assign(100,0);
        cin >> d >> s;
        for (int i=0;i<s.length();i++)
            cnt[s[i]-'0']++;
        if (solve())
            cout << 1 << endl;
        else 
            cout << -1 << endl;        
    }
    return 0;
}