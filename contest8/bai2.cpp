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
        if (s=="PUSH")
        {
            cin >> temp;
            a.push_back(temp);
        }
        else 
            if (s=="POP")
            {
                if (!a.empty())
                    a.erase(a.begin());
            }
            else 
                if (s=="PRINTFRONT")
                {
                    if (a.empty())
                        cout << "NONE" << endl;
                    else 
                        cout << a.front() << endl;
                }
    }
    return 0;
}