#include<iostream>
#include<fstream>

using namespace std;
ifstream in("input2.txt");

bool check[1000]={false};

int n,a[1000][1000];

bool KiemTra()
{
    for (int i=1;i<=n;i++)
        if (check[i]==false)
            return false;
    return true;
}
void init()
{
    for (int i=1;i<=1000;i++)
        check[i]=false;
}
void BFS(int u)
{
    int top=1,bot=1,stack[1000];
    stack[bot] = u;
    check[u]=true;
    while (bot <= top)
    {
        int s = stack[bot];
        bot++;
        for (int i=1;i<=n;i++)
            if (check[i]==false && a[s][i])
            {
                check[i]=true;
                stack[++top]=i;
            }
    } 
}
bool result()
{
    for (int i=1;i<=n;i++)
    {
        init();
        BFS(i);
        if (KiemTra()==false)
            return false;
    }
    return true;
}
int main()
{
    in >> n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            in >> a[i][j];
    if (result()==false)
        cout <<"Lien thong khong manh";
    else 
        cout <<"Lien thong manh";
    return 0;
}