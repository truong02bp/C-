#include<iostream>
#include<vector>
using namespace std;

int n,a[150];

void result()
{
    int sum=0;
    for (int i=0;i<n;i++)
        sum+=a[i];
    if (sum%2==1)
        cout <<"NO";
    else
    {
        int s = sum/2;
        vector<int> L(100000,0);
        L[0]=1;
        for (int i=0;i<n;i++)
            for (int t = s ; t>=a[i] ; t--)
                if (L[t]==0 && L[t-a[i]]==1)
                    L[t]=1;
        if (L[s]==1)
            cout <<"YES";
        else 
            cout <<"NO";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i];
        result();
        cout << endl;
    }
    return 0;
}