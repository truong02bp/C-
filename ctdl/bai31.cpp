#include<iostream>
#include<vector>
using namespace std;

vector<string> dir;
string rs;
int k,m,n,kt;
char a[5][5];
bool check[5][5];

bool ktra()
{
    for (int i=0;i<dir.size();i++)
        if (rs == dir[i])
            return true;
    return false;        
}
void Try(int i , int j)
{
    rs+=a[i][j];
    check[i][j]=true;
    if (ktra())
    {
        kt=1;
        cout << rs <<" ";
    }
    for (int u=i-1;u<=i+1 && u<m;u++)
        for (int v=j-1;v<=j+1 && v<n;v++)
            if (u>=0 && v >=0 && check[u][v]==false)
                Try(u,v);
    rs.erase(rs.length()-1); 
    check[i][j]=false;           
}
void result()
{
    rs="",kt=0;
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            Try(i,j);
    if (kt==0)
        cout << -1;
    cout << endl;           
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> k >> m >> n;
        cin.ignore();
        dir.clear();
        for (int i=0;i<k;i++)
        {
            string s;
            cin >> s;
            dir.push_back(s);
        }
        for (int i=0;i<m;i++)
            for (int j=0;j<n;j++)
            {
                cin >> a[i][j];
                check[i][j]=false;
            }   
        result();   
    }
    return 0;
}