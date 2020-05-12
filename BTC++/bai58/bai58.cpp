#include<iostream>
#include<vector>
using namespace std;

vector<string> Sort(vector<string> a , int n);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<string> a;
        cin >> n;
        for (int i=0;i<n;i++)
        {
            string temp;
            cin >> temp;
            a.push_back(temp);
        }
        a = Sort(a,n);
        for (int i=0;i<a.size();i++)
            cout << a[i];
        cout << endl;
    }
}
vector<string> Sort(vector<string> a , int n)
{
    string temp;
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            string ab = a[i]+a[j];
            string ba = a[j]+a[i];
            if (ab < ba)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a;
}