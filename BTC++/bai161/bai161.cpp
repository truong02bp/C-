#include<iostream>
using namespace std;

bool check(string s , int k);
long long count(string s,  int k);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        string s;
        cin >> s >> k;
        cout << count(s,k) << endl;
    }
    return 0;
}
bool check(string s , int k)
{
    int count=0;
    bool check[10001];
    
    for (int i=0;i<s.length();i++)
        check[s[i]-'0']=false;
    for (int i=0;i<s.length();i++)
    {
        if (check[s[i]-'0']==false)
        {
            count++;
            check[s[i]-'0']=true;
        }
        if (count > k)
            return false;
    }
    return (count==k);
}
long long count(string s, int k)
{
    int counter=0;
    for (int i=0;i<s.length();i++)
    {
        string temp="";
        for (int j=i;j<s.length();j++)
        {
            temp+=s[j];
            if (check(temp,k)==true)
            {
                counter++;
            }
        }
    }
    return counter;
}