#include<iostream>
using namespace std;

int a[20]={1000, 500, 200,100,50,20,10,5,2,1},n;

void Solve()
{
    int i=0;
    int count=0;
    while (n>0)
    {
        if (n>=a[i])
        {
            int temp = n/a[i];
            count+=temp;
            n-=temp*a[i];
        }
        else 
            i++;
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Solve();
    }
    return 0;
}