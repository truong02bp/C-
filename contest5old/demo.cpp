#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;

int n1,n2,n3;
ll a[1000005],b[1000005],c[1000005],temp[1000005],rs[1000005];

void result()
{
    int i=0,j=0,k=0;
    while (i < n1 && j<n2)
    {
        if (a[i] < b[j])
            i++;
        else 
            if (a[i] > b[j])
                j++;
            else 
            {
                temp[k] = a[i];
                i++;
                j++;
                k++;
            }
    }
    if (k==0)
        cout << -1 << endl;
    else 
    {
        i=0,j=0;
        int t=0;
        while (i<k && j<n3)
        {
            if (temp[i] < c[j])
                i++;
            else 
                if (temp[i] > c[j])
                    j++;
                else 
                {
                    rs[t] = c[j];
                    t++;
                    j++;
                    i++;
                }
        }
        if (t==0)
            cout << -1 << endl;
        else 
        {
            for (int i=0;i<t;i++)
                cout << rs[i] <<" ";
            cout << endl;
        }
    }
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n1 >> n2 >> n3;
        for (int i=0;i<n1;i++)
            cin >> a[i];
        for (int i=0;i<n2;i++)
            cin >> b[i];
        for (int i=0;i<n3;i++)
            cin >> c[i];
        result();
    }
    return 0;
}