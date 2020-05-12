#include<iostream>
#include<fstream>
using namespace std;

ifstream in("input2.txt");

int n,a[1000][1000];
bool check[1000]={false};

void init()
{
    for (int i=1;i<=n;i++)
        check[i]=false;
}
bool kiemTraCanhCau()
{
    for (int i=1;i<=n;i++)
        if (check[i]==false)
            return true;
    return false;
}
void DFS(int u)
{
    int stack[1000],top=1;
    stack[top]=u;
    check[u]=true;
    while (top > 0)
    {
        int s = stack[top];
        top--;
        for (int i=1;i<=n;i++)
            if (check[i]==false && a[s][i]==1)
            {
                check[i]=true;
                stack[++top]=s;
                stack[++top]=i;
                break;
            }
    }
}

void result()
{
    cout <<"Canh cau : ";
    for (int i=1;i<=n;i++)
        for (int j=i+1;j<=n;j++)
            if (a[i][j]==1)
                {
                    init();
                    a[i][j]=0;
                    a[j][i]=0;
                    DFS(1);
                    if (kiemTraCanhCau()==true)
                        cout << "(" << i <<";" << j <<") ";
                    a[i][j]=1;
                    a[j][i]=1;
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