#include<iostream>
#include<queue>
using namespace std;

int s,t;

int result()
{
    int cnt[20005];
    for (int i=1;i<=20005;i++)
        cnt[i] = 99999;
    queue<int> a;
    cnt[s]=0;
    a.push(s);
    while (!a.empty())
    {
        int temp = a.front();
        a.pop();
        if (temp-1==t || 2*temp==t)
            return cnt[temp]+1;
        if (cnt[temp-1] == 99999)
        {
            cnt[temp-1] = cnt[temp] + 1;
            a.push(temp-1);
        }
        if (cnt[2*temp] ==99999)
        {
            cnt[2*temp] = cnt[temp]+1;
            a.push(2*temp);
        }
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        cin >> s >> t;
        cout << result() << endl;
    }
    return 0;
}