#include<iostream>
#include<queue>
using namespace std;

priority_queue< int,vector<int>,greater<int> > a;
int n;

void result()
{
    long long sum=0;

    while (a.size()>1)
    {
        int x = a.top();
        a.pop();
        int y = a.top();
        a.pop();
        sum+=x+y;
        a.push(x+y);
    }
    a.pop();
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            a.push(temp);
        }   
        result();   
    }
    return 0;
}