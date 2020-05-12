#include<iostream>
#include<fstream>
using namespace std;

int a[1000][1000],n;
bool check[1000];
ifstream in("input2.txt");

void init()
{
    for (int i=1;i<=1000;i++)
        check[i]=false;
}

bool KiemTraDinhTru(int u)
{
    for (int i=1;i<=n;i++)
        if (i!=u && check[i]==false)
            return true;
    return false;
}

void BFS(int u)
{
    int stack[1000] , top=1,bot=1;
    stack[bot]=u;
    check[u]=true;
    while (bot <= top)
    {
        int s = stack[bot];
        bot++;
        for (int i=1;i<=n;i++)
            if (check[i]==false && a[s][i]==1)
            {
                check[i]=true;
                stack[++top]=i;
            }
    }
}
void result()
{
    cout <<"Dinh tru : ";
    for (int i=1;i<=n;i++)
    {
        init();
        check[i]=true;
        if (i==1)
            BFS(2);
        else 
            BFS(1);
        if (KiemTraDinhTru(i)==true)
            cout << i <<" ";
    }
}

int main()
{
    in >> n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            in >> a[i][j];
    result();
    return 0;
}