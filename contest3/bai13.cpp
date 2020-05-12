#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> cnt;
int d;
string s;

bool dk(int i , int j)
{
    return i > j;
}
void result()
{
    int i=0,kt=0;
    while (cnt[i]!=0)
    {
        int p = cnt[i];
        for (int j=0;j<p;j++)
        {
            if ((i+(j*d)) >= s.length())
            {
                kt=1;
                break;
            } 
        }
        if (kt==1)
            break;
        i++;
    }
    if (kt==0)
        cout << 1 << endl;
    else 
        cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cnt.assign(100,0);
        cin >> d;
        cin >> s;
        for (int i=0;i<s.length();i++)
            cnt[s[i]-'\0']++;
        sort(cnt.begin(),cnt.end(),dk);
        result();
    }
    return 0;
}