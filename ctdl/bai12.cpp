#include<iostream>
using namespace std;

int a[20],n,k;

bool check()
{
    int count=0;
    for (int i=1;i<=n;i++)
    {
        if (a[i]==1)
            count++;
        if (count > k)
            return false;
    }
    if (count == k)
        return true;
    return false;        
}
void Try(int i)
{
    for (int j=0;j<2;j++)
    {
        a[i] = j;
        if (i == n)
        {
            if (check()==true)
            {
                for (int i=1;i<=n;i++)
                    cout << a[i];
                cout << endl;
            }
        }
        else 
            Try(i+1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        Try(1);
    }
    return 0;
}