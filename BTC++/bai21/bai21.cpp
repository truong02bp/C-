#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

bool check[1000000];

int main()
{
    int t;
    cin >> t;
    check[0] = false;
    check[1] = false;
    for (int i=2;i*i<=1000000;i++)
        check[i]=true;
    for (int i=2;i*i<=1000000;i++)
        if (check[i]==true)
        {
            for (int j=i*i;j*j<=1000000;j+=i)
                check[j]=false;
        }
    while (t--)
    {
        int n;
        cin >> n;
        for (int i=2;i*i<=n;i++)
            if (check[i]==true)
                cout << i*i <<" ";
        cout << endl;
    }
    return 0;
}

