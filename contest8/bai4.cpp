#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int k;
string s;

void result()
{
    priority_queue<int> a;
    vector<int> cnt(100,0);
    for (int i=0;i<s.length();i++)
        cnt[s[i]-'A']++;
    for (int i=0;i<cnt.size();i++)
        if (cnt[i]!=0)
            a.push(cnt[i]);
    while (k--)
    {
        int temp = a.top();
        a.pop();
        a.push(temp-1);
    }
    long long rs = 0;
    while (!a.empty())
    {
        long long temp = a.top();
        rs += temp*temp;
        a.pop();
    }
    cout << rs << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> k >> s;
        result();
    }
    return 0;
}