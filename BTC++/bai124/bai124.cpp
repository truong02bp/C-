#include<iostream>
#include<vector>
using namespace std;

long Find(vector<long> &a , long n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        vector<long> a;
        for (long i=0;i<n;i++)
        {
            long temp;
            cin >> temp;
            a.push_back(temp);
        }
        cout << Find(a,n) << endl;
    }
}
long Find(vector<long> &a , long n)
{
    bool check[1000001];
        for (long i=0;i<n;i++)
            check[a[i]]=false;
        for (long i=0;i<n;i++)
        {
            if (check[a[i]]==true) // nếu đã xuất hiện rồi sẽ đánh dấu lại là false
                check[a[i]]=false;
            else
            {
                check[a[i]]=true; // chưa xuất hiện thì đánh dấu là true
            }
        }
        for (long i=0;i<n;i++)
            if (check[a[i]]==false)
                return a[i];
    return -1;
}