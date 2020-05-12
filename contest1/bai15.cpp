#include <iostream>
using namespace std;

string result(string s)
{
    int i = s.length() - 2;
    while (s[i] >= s[i + 1])
        i--;
    if (i >= 0)
    {
        int k = s.length() - 1;
        while (s[i] >= s[k])
            k--;
        int t = s[i];
        s[i] = s[k];
        s[k] = t;
        int l = i + 1, r = s.length() - 1;
        while (l <= r)
        {
            t = s[l];
            s[l] = s[r];
            s[r] = t;
            l++;
            r--;
        }
        return s;
    }
    else
    {
        return "BIGGEST";
    }
}

int main()
{
    int t;
    cin >> t;
    int l;
    while (t--)
    {
        cin >> l;
        string s;
        cin >> s;
        cout << l <<" " << result(s) << endl;
    }
    return 0;
}