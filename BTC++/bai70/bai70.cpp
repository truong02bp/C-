#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int Kqua(vector<int> &a , int k);

int main()
{
    ifstream in("input70.txt");
    ofstream out("output70.txt");
    int t;
    in >> t;
    while (t--)
    {
        int n,k;
        int a[100][100];
        vector<int> b;
        in >> n >> k;
        for (int i=0;i<n;i++)
            for (int j=0;j<n;j++)
            {
                in >> a[i][j];
                b.push_back(a[i][j]);
            }
        out << Kqua(b,k) << endl;
    }
    return 0;
}

int Kqua(vector<int> &a , int k)
{
    sort(a.begin(),a.end());
    return a[k-1];
}