#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Display(vector<int> &a , int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> a;
        cin >> n;
        for (int i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        Display(a,n);
        cout << endl;
    }
    return 0;
}

void Display(vector<int> &a , int n)
{
    vector<int> b;
    for (int i=0;i<n;i++)
        b.push_back(a[i]);
    sort(b.begin(),b.end());
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            if (a[i]==b[n-1])
            {
                cout <<"_ ";
                break;
            }
            if (a[i]==b[j])
            {
                cout << b[j+1] <<" ";
                break;
            }
        }
    }
}