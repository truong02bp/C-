#include<iostream>
using namespace std;

int k;
string s;

int find(int i)
{
    int rs = i;
    for (int j=i+1;j<s.length();j++)
        if (s[j] >= s[rs])
            rs = j;
    return rs;        
}

bool check()
{
    for (int i=0;i<s.length()-1;i++)
        if (s[i] < s[i+1])
            return false;
    return true;         
}

void Try(int i)
{
    if (k==0 || check()==true)
    {
        return ;    
    }
    int t,index;
    index = find(i);
    if (s[index] > s[i])
    {
        char t = s[index];
        s[index] = s[i];
        s[i] = t;
        k--;
    }       
    if (i < s.length())
        Try(i+1); 
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> k;
        cin >> s;
        Try(0);
        cout << s << endl;
    }
    return 0;
}