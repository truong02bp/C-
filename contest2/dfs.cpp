#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

int a[100][100],n,stack[100],index;
vector<bool> check(100,false);

void dfs(int u)
{
    index=1;
    stack[index]=u;
    check[u]=true;
    cout << u <<" ";
    while (index!=0)
    {
        int s = stack[index];
        index--;
        for (int i=1;i<=n;i++)
            if (a[s][i]==1 && check[i]==false)
            {
                cout << i <<" ";
                check[i] = true;
                stack[++index] = s;
                stack[++index] = i;
                break;
            }
    }
}

int main()
{
    int u;
    ifstream in("input.txt");
    in >> n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            in >> a[i][j];
    cin >> u;
    dfs(u);
    return 0;
}