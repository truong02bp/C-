/*
    Nguyễn Huy Trường - B18DCCN676 - nhóm 6
*/

#include<iostream>
#include<fstream>
using namespace std;

fstream in("input.txt");

int n, a[1000][1000];
bool check[1000] = {false};

void bfs(int u)
{
    int stack[1000],top=1;
    stack[top] = u;
    check[u] = true;
    cout << u <<" ";
    while (top > 0)
    {
        int s = stack[top];
        top--;
        for (int i=1;i<=n;i++)
            if (check[i]==false && a[s][i]==1)
            {
                check[i] = true;
                cout << i <<" ";
                stack[++top] = s;
                stack[++top] = i;
                break;
            }
    }
}

void tplt_dfs(int a[][1000])
{
    int rs = 0;
    for (int i=1;i<=n;i++)
        if (check[i]==false)
        {
            rs++;
            bfs(i);
            cout << endl;
        }
    cout <<"So thanh phan lien thong la : " << rs << endl;
}

int main()
{
    in >> n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            in >> a[i][j];
    tplt_dfs(a);
    return 0;
}
