#include<iostream>
using namespace std;

int m,n,a[100005],b[1000005],k;

int result()
{
    int index=0,i=0,j=0;
    int c[300000];
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            c[index] = a[i];
            index++;
            i++;
        }
        else 
        {
            c[index] = b[j];
            index++;
            j++;
        }
        if (index==k)
            return c[index-1];
    }
    while (i<m)
    {
        c[index] = a[i];
        index++;
        if (index==k)
            return c[index-1];
        i++;
        
    }
    while (j<n)
    {
        c[index] = b[j];
        index++;
        if (index==k)
            return c[index-1];
        j++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> m >> n >> k;
        for (int i=0;i<m;i++)
            cin >> a[i];
        for (int i=0;i<n;i++)
            cin >> b[i];
        cout << result() << endl;
    }
    return 0;
}