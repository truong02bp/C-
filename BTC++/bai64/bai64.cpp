#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Sort(vector<int> &kq);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> kq;
        int n,k;
        cin >> n >> k;
        int a[1000][10];
        for (int i=0;i<n;i++)
            for (int j=0;j<k;j++)
            {
                cin >> a[i][j];
                kq.push_back(a[i][j]);
            }       
        Sort(kq);
    }
    return 0;
}
void Sort(vector<int> &kq)
{
    sort(kq.begin(),kq.end());
    for (int i=0;i<kq.size();i++)
            cout << kq[i] <<" "; 
    cout << endl;
}