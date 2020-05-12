#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void Sort(vector<int> &a , int x);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n >> x;
        vector<int> a;
        for (int i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        Sort(a,x);
        for (int i=0;i<n;i++)
            cout << a[i] <<" ";
        cout << endl;
    }
    return 0;
}
void Sort(vector<int> &a , int x)
{
    int kt;
    for (int i=0;i<a.size()-1;i++)
    {
        kt =1;
        for (int j=i+1;j<a.size();j++)
            if (abs(a[i]-x) > abs(a[j]-x))
            {
                kt=0;
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        if (kt==1)
            break;
    }
}