#include<iostream>
using namespace std;

int stack[100005],top=0,n;
string s;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s=="PUSH")
        {
            cin >> n;
            stack[top++]=n;
        }
        else 
            if (s=="POP")
            {
                if (top>0)
                    top--;
            }
            else 
                if (s=="PRINT")
                {
                    if (top>0)
                        cout << stack[top-1];
                    else 
                        cout << "NONE";
                    cout << endl;
                }
    }
    return 0;
}