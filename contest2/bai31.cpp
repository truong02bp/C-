#include<iostream>
#include<vector>
using namespace std;

string rs;
vector<string> dic;
char s[100][100];
bool check[100][100];
int k,m,n,kt=0;

bool Ktra()
{
    for (int i=0;i<dic.size();i++)
        if (rs==dic[i])
            return true;
    return false;
}
void Try(int i , int j)
{
    rs+=s[i][j];
    check[i][j]=true;
    if (Ktra()==true)
    {
        cout << rs <<" ";
        kt=1;
    }
    for (int u=i-1;u<=i+1 && u < m;u++)
        for (int v=j-1;v<=j+1 && v<n;v++)
            if (u>=0 && v >=0 && check[u][v]==false)
            {
                Try(u,v);
            }
    rs.erase(rs.length()-1);
    check[i][j]=false;
}
void result()
{
    rs="";
    kt=0;
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
        dic.clear();
        cin >> k >> m >> n;
        cin.ignore();
        for (int i=0;i<k;i++)
        {
            string temp;
            cin >> temp;
            dic.push_back(temp);
        }
        for (int i=0;i<m;i++)
            for (int j=0;j<n;j++)
            {
                cin >> s[i][j];
                check[i][j]=false;
            }
        result();
    }
    return 0;
}