#include<iostream>
#include<vector>
using namespace std;

int n,temp;
string s;
vector<int> a;

int main()
{
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s=="PUSHFRONT")
        {
            cin >> temp;
            a.insert(a.begin(),temp);
        }
        if (s=="PUSHBACK")
        {
            cin >> temp;
            a.push_back(temp);
        }
        if (s=="PRINTFRONT")
        {
            if (a.empty())
                cout << "NONE" << endl;
            else 
                cout << a.front() << endl;
        }
        if (s=="PRINTBACK")
        {
            if (a.empty())
                cout << "NONE" << endl;
            else 
                cout << a.back() << endl;
        }
        if (s=="POPFRONT")
        {
            if (!a.empty())
                a.erase(a.begin());
        }
        if (s=="POPBACK")
            if (!a.empty())
                a.pop_back();
    }
    return 0;
}