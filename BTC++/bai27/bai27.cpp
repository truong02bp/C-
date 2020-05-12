#include<iostream>
using namespace std;

int FindX(int a , int m);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,m;
        cin >> a >> m;
        cout << FindX(a,m) << endl;
    }
    return 0;
}

int FindX(int a , int m)
{
    for (int i=1;i<m;i++)
        if (((long long)i*a)%m==1)
            return i;
    return -1;
}W