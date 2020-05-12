#include<iostream>
#include<vector>
using namespace std;

int Minn(vector<int> &a , int n);
int Maxx(vector<int> &a , int n);
int Count(vector<int> &a , int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for (int i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        cout << Count(a,n) << endl;
    }
    return 0;
}
int Minn(vector<int> &a , int n)
{
    int min=a[0];
    for (int i=1;i<n;i++)
        if (min > a[i])
            min = a[i];
    return min;
}
int Maxx(vector<int> &a , int n)
{
    int max=a[0];
    for (int i=1;i<n;i++)
        if (max < a[i])
            max = a[i];
    return max;
}
int Count(vector<int> &a , int n)
{
    int counter=0;
    vector<bool> check(1001,false);
    for (int i=0;i<n;i++)
        check[a[i]]=true;
    int min=Minn(a,n),max=Maxx(a,n);
    for (int i=min+1;i<max;i++)
        if (check[i]==false)
            counter++;
    return counter;
}