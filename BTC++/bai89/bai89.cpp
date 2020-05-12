#include<iostream>
#include<vector>
using namespace std;

void Display(vector<int> &a , int n , int k);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a;
        for (int i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        Display(a,n,k);
    }
    return 0;
}
void Display(vector<int> &a , int n , int k)
{
    vector<int> kq(100001);
    double max=-9999999;
    for (int i=0;i<n;i++)
    {
        double tb=a[i];
        for (int j=i+1;j<i+k;j++)
            tb+=a[j];
        if ((tb/k) > max)
        {
            max = tb/k;
            for (int t=0;t<k;t++)
                kq[t]=a[t+i];
        }
    }
    for (int i=0;i<k;i++)
        cout << kq[i] <<" ";
    cout << endl;
}