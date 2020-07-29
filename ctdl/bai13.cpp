#include<iostream>
#include<vector>
using namespace std;

int a[20],n,k;
vector< string > kq;

bool check()
{
    int count=0,rs=0;
    for (int i=1;i<=n;i++)
    {
        if (a[i]==0)
            count++;
        else 
            count=0;     
        if (count >= k)
            rs++;
        if (rs > 1)
            return false;
    }
    if (rs == 1)
        return true;
    return false;          
}
void Try(int i)
{
    for (int j=0;j<2;j++)
    {
        a[i] = j;
        if (i == n)
        {
            if (check()==true)
            {  
                string s = "";
                for (int i=1;i<=n;i++)
                {
                    if (a[i]==0)
                        s+='A';
                    else 
                        s+='B';     
                }
                kq.push_back(s);   
            }
        }
        else 
            Try(i+1);
    }
}
int main()
{
    cin >> n >> k;
    Try(1);
    cout << kq.size() << endl;
    for (int i=0;i<kq.size();i++)
        cout << kq[i] << endl;
    return 0;
}