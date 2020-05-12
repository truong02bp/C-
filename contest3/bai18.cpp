#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> rs;

void result()
{
    int x = n / 7;
    int index = -1;
    for (int j = x; j >= 0; j--)
    {
        n -= j * 7;
        if (n % 4 == 0 && n >= 0)
        {
            index = j;
            break;
        }
        else
            n += j * 7;
    }
    if (index == -1)
        cout << -1 << endl;
    else
    {
        for (int i = 0; i < index; i++)
            rs.push_back(7);
        for (int i = 1; i <= n / 4; i++)
            rs.push_back(4);
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
        cin >> n;
        result();
    }
    return 0;
}