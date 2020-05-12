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
    for (int i=0;i<n;i++)
    {
        int kt=0;
        for (int j=0;j<n-1;j++)
            if (a[j] > a[j+1])
            {
                kt=1;
                swap(a[j],a[j+1]);
            }
        if (kt==0)
            break;
        cout <<"Buoc "<< l <<": ";
        in();
        l++;
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