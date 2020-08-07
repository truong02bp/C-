#include<bits/stdc++.h>
using namespace std; 

int n,temp;
void solve()
{
    queue<int> q;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> temp;
        switch(temp)
        {
            case 1:
                cout << q.size() << endl;
                break;
            case 2:
                if (q.empty())
                    cout <<"YES" << endl;
                else 
                    cout <<"NO" << endl;
                break;
            case 3:
                {
                    int t;
                    cin >> t;
                    q.push(t);
                }
                break;
            case 4:
                if (!q.empty())
                    q.pop();
                break;
            case 5:
                {
                    if (q.empty())
                        cout << -1 << endl;
                    else    
                        cout << q.front() << endl;
                }
                break;
            case 6:
                {
                    if (q.empty())
                        cout << -1 << endl;
                    else    
                        cout << q.back() << endl;
                }
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
        solve();
    }
    return 0;
}