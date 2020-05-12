#include<iostream>
using namespace std;

int n, a[1000];

void in()
{
    for (int i=0;i<n;i++)
        cout << a[i] <<" ";
    cout << endl;
}

void result()
{
    int l=1;
    for (int i=0;i<n-1;i++)
    {
        int kt=1;
        for (int j=i+1;j<n;j++)
            if (a[i] > a[j])
            {
                swap(a[i],a[j]);
                kt=0;
            }
        cout <<"Buoc " << l <<": ";
        in();
        l++;
        if (kt==1)
            break;
    }
}

int main()
{
    cin >> n;
    for (int i=0;i<n;i++)
        cin >> a[i];
    result();
    return 0;
}