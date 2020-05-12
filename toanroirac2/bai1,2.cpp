/*
    Nguyễn Huy Trường - B18DCCN676 - nhóm 6
*/

#include<iostream>
#include<fstream>
using namespace std;

ifstream in("input2.txt");
int n,a[1000][1000];
bool check[1000] = {false};

void bfs(int u)
{
    int stack[100] , top=1 , bot = 1;
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
                stack[++top] = i;
            }
    }
}

int main()
{
    int u;
    cout << "Nhap dinh dau tien : " << endl;
    cin >> u;
    in >> n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            in >> a[i][j];
    bfs(u);
    return 0;
}