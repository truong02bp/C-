#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool SoSanh(string a , string b);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> a;
        for (int i=0;i<n;i++)
        {
            string b;
            cin >> b;
            a.push_back(b);
        }
        sort(a.begin(),a.end(),SoSanh);
        for (int i=0;i<a.size();i++)
            cout << a[i];
        cout << endl;
    }
    return 0;
}

bool SoSanh(string a , string b)
{
    string ab = a + b;
    string ba = b + a;
    return (ab > ba);
}