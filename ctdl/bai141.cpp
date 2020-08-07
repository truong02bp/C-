#include<bits/stdc++.h>
using namespace std;

string str;

void solve()
{
    stack<char> s;
    for (int i=0;i<str.length();i++)
        if (str[i]==' ')
        {
            while(!s.empty())
            {
                cout << s.top();
                s.pop();
            }
            cout <<" ";
        }
        else 
            s.push(str[i]);
    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }           
    cout << endl;   
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        getline(cin,str);
        if(str.length()==0){
			t++;
			continue;
		}
        solve();
    }
    return 0;
}