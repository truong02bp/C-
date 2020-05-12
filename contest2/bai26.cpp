#include<iostream>
using namespace std;

int k ,  n;
string s;

int find(int j)
{
    int rs = j;
    for (int i=j+1;i<n;i++)
        if (s[i] >= s[rs])
            rs = i;
    return rs;
}
bool check()
{
    for (int i=0;i<n-1;i++)
        if (s[i] < s[i+1])
            return false;
    return true;
}

void Try (int i)
{
    if (k==0 || check()==true)
    {
        for (int j=0;j<n;j++)
                cout << s[j];
    }
    else 
    {
        int m = find(i);
        if (s[m] > s[i])
        {
            char temp = s[m];
            s[m] = s[i];
            s[i] = temp;
            k--;
        } 
        if (i < n)
            Try(i+1);
    }
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> k >> s;
        n = s.length();
        if (check()==false)
            Try(0);
        else 
            cout << s;
        cout << endl;
    }
    return 0;
}