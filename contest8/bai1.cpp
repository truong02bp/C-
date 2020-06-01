#include<iostream>
#include<vector>
using namespace std;

int n,temp;

void result()
{
    vector<int> a;
    for (int i=0;i<n;i++)
    {
        cin >> temp;
        switch (temp)
        {
        case 1:
                cout << a.size() << endl;
            break;
        case 2:
            if (a.empty())
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
            break;
        case 3:
            int x;
            cin >> x;
            a.push_back(x);
            break;
        case 4:
            if (!a.empty())
                a.erase(a.begin());
            break;
        case 5:
            if (a.empty())
                cout << -1 << endl;
            else
                cout << a.front() << endl;
            break;
        case 6:
            if (a.empty())
                cout << -1 << endl;
            else
                cout << a.back() << endl;
            break;
        default:
            break;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        result();
    }
    return 0;
}
