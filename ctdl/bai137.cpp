#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[105];
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    int l=0;
    cout << "Buoc " <<l <<": "<< a[0] << endl;
    l++;
    for (int i=1;i<n;i++)
    {
        int key = a[i];
        int j=i-1;
        while(j>=0 && a[j] > key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        cout <<"Buoc "<<l <<": ";
        for (int j=0;j<=i;j++)
            cout << a[j]<<" ";
        cout << endl;    
        l++;    
    }
    return 0;    
}