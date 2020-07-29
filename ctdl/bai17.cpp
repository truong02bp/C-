#include<iostream>
using namespace std;

int n,a[100],pos,stop;

long long sum()
{
    long long rs = 0;
    for (int i=0;i<pos;i++)
        rs = rs *10 + a[i];
    return rs;    
}

void init(int pos)
{
    for (int i=0;i<pos;i++)
        a[i] = 0;
}

void sinh(int pos)
{
    int i = pos;
    while (a[i] == 9)
    {
        a[i] = 0;
        i--;
    }
    if (i>=0)
        a[i]=9;
    else 
        stop = 1;    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        pos = 1;
        while (1)
        {
            int kt=0;
            init(pos);
            stop = 0;
            while (stop == 0)
            {
                sinh(pos);
                if (sum()%n==0 && sum()!=0)
                {
                    cout << sum() << endl;
                    kt=1;
                    break;
                }    
            }
            if (kt==1 || pos > 15)
                break;
            pos++;
        }
    }
    return 0;
}