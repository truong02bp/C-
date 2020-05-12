#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nhap(long a[] , long n);
void Display(long a[] , long n , long b[] , long m);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n,m;
        cin >> n >> m;
        long a[100001],b[100001];
        nhap(a,n);
        nhap(b,m);
        Display(a,n,b,m);
    }
    return 0;
}
void nhap(long a[] , long n)
{
    for (int i=0;i<n;i++)
        cin >> a[i];
}
void Display(long a[] , long n , long b[] , long m)
{
    vector<bool> check(1000000);
    vector<long> U,I;
        for (long i=0;i<m;i++)
            check[b[i]]=false; // false : chua xuat hien , true : da xuat hien
        for (long i=0;i<n;i++)
        {
            U.push_back(a[i]);
            check[a[i]]=true;
        }
        for (long i=0;i<m;i++)
        {
            if (check[b[i]]==false)
                U.push_back(b[i]);
            else
            {
                I.push_back(b[i]);
            }
        }
        sort(U.begin(),U.end());
    for (long i=0;i<U.size();i++)
        cout << U[i]<<" ";
    cout << endl;
    for (long i=0;i<I.size();i++)
        cout << I[i] <<" ";
    cout << endl;
}