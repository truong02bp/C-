#include<bits/stdc++.h>
using namespace std;

string s;
vector<int> cnt;
int temp;

bool result()
{
    int size = s.length();
    if (size%2==0)
    {
        if (temp > size/2)
            return false;
        return true;    
    }
    else 
        if (temp > size/2+1)
            return false;
        return true;    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cnt.assign(100,0);
        temp=0;
        cin >> s;
        for (int i=0;i<s.length();i++)
            cnt[s[i]-'0']++;
        for (int i=0;i<s.length();i++)
            temp = max(temp,cnt[s[i]-'0']);   
        if (result())
            cout << 1 << endl;
        else 
            cout << -1 << endl;        
    }
    return 0;
}