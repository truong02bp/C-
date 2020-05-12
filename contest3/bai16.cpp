#include <iostream>
#include <vector>
using namespace std;

int s, d;
vector<int> rs;

void result()
{
    if (s > (d * 9))
        cout << -1 << endl;
    else
    {
        while (d > 0)
        {
            if (s > 9)
            {
                rs.push_back(9);
                s -= 9;
            }
            else
            {
                if (s > 1)
                {
                    rs.push_back(s - 1);
                    s -= (s - 1);
                }
                else
                {
                    if (d != 1)
                        rs.push_back(0);
                    else
                        rs.push_back(1);
                }
            }
            d--;
        }
        for (int i = rs.size() - 1; i >= 0; i--)
            cout << rs[i];
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        rs.clear();
        cin >> s >> d;
        result();
    }
    return 0;
}