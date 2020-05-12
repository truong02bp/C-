#include<iostream>
#include<vector>
using namespace std;

string s;
int temp;
void result()
{
    int size = s.length();
    if (size%2==0)
    {
        if (temp > size/2)
            cout << -1 << endl;
        else 
            cout << 1 << endl;
    }
    else 
    {
        if (temp > size/2 + 1)
            cout << -1 << endl;
        else 
            cout << 1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> cnt(100,0);
        temp = 0;
        cin >> s;
        for (int i=0;i<s.length();i++)
            cnt[s[i]-'0']++;
        for (int i=0;i<cnt.size();i++)
            if (cnt[i]!=0)
                temp = max(temp,cnt[i]);
        result();
    }
    return 0;
}