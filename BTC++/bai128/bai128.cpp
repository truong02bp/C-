#include<iostream>
#include<vector>
using namespace std;

void Display(vector< vector<int> > &a , int n , int m);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector< vector<int> > a;
        for (int i=0;i<n;i++)
        {
            vector<int> b;
            for (int j=0;j<m;j++)
            {
                int temp;
                cin >> temp;
                b.push_back(temp);
            }
            a.push_back(b);
        }
        Display(a,n,m);
    }
    return 0;
}
void Display(vector< vector<int> > &a , int n , int m)
{
    int b[100][100];
        for (int i=1;i<m;i++)
        {
            b[0][0]=a[1][0];
            b[0][i] = a[0][i-1];
        }
        for (int i=1;i<n-1;i++)
        {
            b[i][0]=a[i+1][0];
            for (int j=1;j<m-1;j++)
                b[i][j]=a[i][j];
            b[i][m-1]=a[i-1][m-1];
        }
        for (int i=m-2;i>=0;i--)
        {
            b[n-1][m-1]=a[n-2][m-1];
            b[n-1][i]=a[n-1][i+1];
        }
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
                cout << b[i][j] << " ";
        }
        cout << endl;
}