#include <iostream>
#include <vector>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, less_equal<int> > a;
string s;
int k;
vector<int> cnt;

void result()
{
    long long sum = 0;
    while (k > 0)
    {
        int x = a.top();
        a.pop();
        int y = a.top();
        if (x == y)
        {
            x--;
            k--;
            a.push(x);
        }
        else
        {
            if (x - y <= k)
            {
                a.push(y);
                k -= (x - y);
            }
            else
            {
                while (x > y)
                {
                    x--;
                    k--;
                    if (k == 0)
                        break;
                }
                a.push(x);
            }
        }
    }
    while (!a.empty())
    {
        int temp = a.top();
        a.pop();
        sum += temp * temp;
    }
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cnt.assign(100, 0);
        cin >> k >> s;
        for (int i = 0; i < s.length(); i++)
            cnt[s[i] - '\0']++;
        for (int i = 0; i < cnt.size(); i++)
            if (cnt[i] != 0)
                a.push(cnt[i]);
        result();
    }
    return 0;
}