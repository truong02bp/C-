#include<iostream>
#include<stack>
using namespace std;

int n,a[1000005];

void result()
{
    stack<int> s;
    for (int i=0;i<n-1;i++)
        if (a[i] > a[i+1])
            s.push(a[i]);
        else 
        {
            bool accept = false;
            while (!s.empty())
            {
                if (a[i+1] > s.top())
                {
                    accept = true;
                    s.pop();
                }
                else 
                    break;
            }
            if (accept == true)
                cout << a[i] <<" ";
        }
    cout << a[n-1] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i];
        result();    
    }
    return 0;
}