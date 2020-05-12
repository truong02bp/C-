/*
    Nguyễn Huy Trường - B18DCCN676 - nhóm 6
*/

#include<iostream>
#include<fstream>
using namespace std;

ifstream in("input2.txt");
int n,a[100][100];
bool check[100]={false};

void dfs(int u)
{
    int stack[100],top;
    top=1;
    stack[top]=u;
    check[u]=true;
    cout << u <<" ";
    while (top>0)
    {
        int s = stack[top];
        top--;
        for (int i=1;i<=n;i++)
            if (check[i]==false && a[s][i]==1)
            {
                check[i]=true;
                cout << i <<" ";
                stack[++top] = s;
                stack[++top] = i;
                break;
            }
    }
}


int main()
{
    in >> n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            in >> a[i][j];
    int u;
    cout << "Nhap dinh dau tien : " << endl;
    cin >> u;
    dfs(u);
    return 0;
}