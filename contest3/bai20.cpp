#include<iostream>
#include<vector>
using namespace std;

string s="";

void result()
{
    vector<int> check;
    long long rs=0;
    for (int i=0;i<s.length();i++)
        if (s[i]=='[')
            check.push_back(i);
    int count=0,p=0;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]=='[')
        {
            p++;
            count++;
        }
        else 
            count--;
        if (count < 0)
        {
            rs+= check[p] - i;
            swap(s[i],s[check[p]]);
            p++;
            count=1;
        }
    }
    cout << rs << endl;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin >> s;
        result();
    }
    return 0;
}