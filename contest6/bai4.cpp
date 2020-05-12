#include<iostream>
using namespace std;

int n,m,a[100005],b[100005],U[300000],I[100005];

void result()
{
    int i=0,j=0,k=0,h=0;
    while (i < n && j<m)
    {
        if (a[i] < b[j])
        {
            U[k] = a[i];
            i++;
        }
        else 
            if (a[i] > b[j])
            {
                U[k] = b[j];
                j++;
            }
            else 
            {
                U[k] = a[i];
                I[h] = a[i];
                i++;
                j++;
                h++;
            }
        k++;
    }
    while (i<n)
    {
        U[k] = a[i];
        i++;
        k++;
    }
    while (j<m)
    {
        U[k] = b[j];
        k++;
        j++;
    }
    for (int i=0;i<k;i++)
        cout << U[i] <<" ";
    cout << endl;
    for (int i=0;i<h;i++)
        cout << I[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i=0;i<n;i++)
            cin >> a[i];
        for (int i=0;i<m;i++)
            cin >> b[i];
        result();
    }
    return 0;
}