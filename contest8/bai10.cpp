#include<iostream>
#include<queue>
#include<set>
#include<math.h>
using namespace std;

typedef pair<int,int> ii;
int n;

int result()
{
    queue<ii> a;
    set<int> check;
    a.push(ii(n,0));
    check.insert(n);
    while (!a.empty())
    {
        ii temp = a.front();
        a.pop();
        if (temp.first-1 == 1)
            return temp.second+1;
        if (check.find(temp.first-1) == check.end())
        {
            check.insert(temp.first-1);
            a.push(ii(temp.first-1,temp.second+1));
        }
        for (int i=2;i*i<=temp.first;i++)    
        {
            if (temp.first%i==0)
            {
                int u = temp.first / i;
                if (check.find(u) == check.end())
                {
                    check.insert(u);
                    a.push(ii(u,temp.second+1));
                }
            }
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
        cout << result() << endl;
    }
    return 0;
}