#include<iostream>
#include<vector>
using namespace std;

int n,k,a[50][50],pos[50],sum=0;
bool check[50];

vector< vector<int> > rs;

void accept()
{
    vector<int> x;
    for (int i=1;i<=n;i++)
        x.push_back(pos[i]);
    rs.push_back(x);  
}

void Try(int i)
{
    for (int j=1;j<=n;j++)
        if (check[j] == false)
        {
            check[j] = true;
            pos[i] = j;
            sum+=a[i][j];
            if (i==n)
            {
                if (sum == k)
                    accept();
            }
            else 
                Try(i+1);
            sum-=a[i][j];
            check[j]=false;        
        }
}

int main()
{
    cin >> n >> k;
    for (int i=1;i<=n;i++)
    {
        check[i] = false;
        for (int j=1;j<=n;j++)
            cin >> a[i][j];
    }
    Try(1);
    cout << rs.size() << endl;
    for (int i=0;i<rs.size();i++)
    {
        for (int j=0;j<rs[i].size();j++)
            cout << rs[i][j] <<" ";
        cout << endl;
    }    
    return 0;
}