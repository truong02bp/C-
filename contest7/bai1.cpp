#include<iostream>
using namespace std;

int stack[300],top=0,n;
string s;
void show()
{
    if (top>0)
    {
        for (int i=0;i<top;i++)
            cout << stack[i] <<" ";
        cout << endl;
    }
    else 
        cout << "empty" << endl;
}

int main()
{
    while (cin >> s)
    {
        if (s=="push")
        {
            cin >> n;
            stack[top++]=n;
        }
        else 
            if (s=="pop")
            {
                if (top > 0)
                    top--;
            }
            else 
                if (s=="show")
                    show();
    }
    return 0;
}