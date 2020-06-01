#include<iostream>
#include<queue>
#include<set>
using namespace std;

int s,t;

int result()
{
    set<int> check;
    pair<int,int> temp;
    queue<pair<int,int> > a;
    check.insert(s);
    temp.first = s;
    temp.second = 0;
    a.push(temp);
    while (!a.empty())
    {
        pair<int,int> temp = a.front();
        a.pop();
        if (temp.first-1 == t || 2*temp.first==t)
            return temp.second+1;
        if (check.find(temp.first-1) == check.end() && temp.first > 0)
        {
            pair<int,int> tmp;
            check.insert(temp.first);
            tmp.first = temp.first-1;
            tmp.second = temp.second+1;
            a.push(tmp);
        }
        if (check.find(2*temp.first) == check.end())
        {
            pair<int,int> tmp;
            check.insert(temp.first);
            tmp.first = 2*temp.first;
            tmp.second = temp.second+1;
            a.push(tmp);
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