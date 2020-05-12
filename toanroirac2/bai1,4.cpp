/*
    Nguyễn Huy Trường - B18DCCN676 - nhóm 6
*/

#include<iostream>
#include<fstream>
using namespace std;

ifstream in("input.txt");

int n,a[1000][1000];
bool check[1000]={false};

void bfs(int u)
{
    int stack[1000],top=1,bot=1;
    stack[top] = u;
    check[u] = true;
    while (bot <= top)
    {
        int s = stack[bot];
        bot++;
        cout << s <<" ";
        for (int i=1;i<=n;i++)
            if (check[i]==false && a[s][i]==1)
            {
                check[i]=true;
                stack[++top]=i; 
            }
    }
}
void tplt_bfs(int a[][1000])
{
    int rs = 0;
    for (int i=1;i<=n;i++)
        if (check[i]==false)
        {
            rs++;
            bfs(i);
            cout << endl;
        }
    cout <<"So thanh phan lien thong la : " << rs;
}
int main()
{
    in >> n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            in >> a[i][j];
    tplt_bfs(a);
    return 0;
}