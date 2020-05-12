#include<iostream>
#include<vector>
using namespace std;

int n,k;
int pos[100],a[100][100];
vector<string> rs;
vector<bool> check(100,false);

int sum()
{
    int sum=0;
    for (int i=1;i<=n;i++)
        sum+=a[i][pos[i]];
    return sum;
}
void accept()
{
    string temp="";
    for (int i=1;i<=n;i++)
    {
        temp+=pos[i]+'0';
        temp+=' ';
    }    
    rs.push_back(temp);
}
void Try(int i)
{
    for (int j=1;j<=n;j++)
    {
        if (check[j]==false)
        {
            pos[i]=j;
            check[j]=true;
            if (i==n)
            {
                if (sum()==k)
                    accept();
            }
            else
            {
                Try(i+1);
            }
            check[j]=false;
        }
    }
}
int main()
{
    cin >> n >> k;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            cin >> a[i][j];
    Try(1);
    cout << rs.size() << endl;
    for (int i=0;i<rs.size();i++)
        cout << rs[i] << endl;
}