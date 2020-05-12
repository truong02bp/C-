#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, k, a[20], b[20], sum = 0, kt;
vector< vector<int> > rs;
void accept()
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
        if (b[i] == 1)
        {
            temp.push_back(a[i]);
        }
    rs.push_back(temp);
}

void Try(int i)
{
    for (int j = 0; j < 2; j++)
    {
        b[i] = j;
        sum += j * a[i];
        if (i == n - 1)
        {
            if (sum == k)
            {
                kt = 1;
                accept();
            }
        }
        else
        {
            Try(i + 1);
        }
        sum -= j * a[i];
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        rs.clear();
        sum = 0, kt = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        Try(0);
        if (kt == 0)
            cout << "-1";
        else
        {
            for (int i = rs.size() - 1; i >= 0; i--)
            {
                cout << "[";
                for (int j = 0; j < rs[i].size() - 1; j++)
                    cout << rs[i][j] << " ";
                cout << rs[i][rs[i].size() - 1] << "] ";
            }
        }
        cout << endl;
    }
    return 0;
}