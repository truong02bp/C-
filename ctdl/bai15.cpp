#include<iostream>
using namespace std;

string a;

string solve()
{
    int i = a.length()-2;
    while (a[i] >= a[i+1])
        i--;
    if (i>=0)
    {
        int k = a.length()-1;
        while (a[i] >= a[k])
            k--;
        char t;
        t = a[i];
        a[i] = a[k];
        a[k] = t;
        int l = i+1 , r = a.length()-1;
        while (l<=r)
        {
            t = a[l];
            a[l] = a[r];
            a[r] = t;
            l++;
            r--;
        }     
        return a;
    }    
    else 
        return "BIGGEST";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cin >> a;
        cout << x <<" " << solve() << endl;
    }
    return 0;
}