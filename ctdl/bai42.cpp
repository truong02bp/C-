#include<iostream>
using namespace std;

int a,b,minn=0,maxx=0;

void solve(int a)
{
    int i=1;
    while (a>0)
    {
        int temp = a%10;
        if (temp==5)
        {
            minn+=temp*i;
            maxx+=(temp+1)*i;
        }
        else 
            if (temp==6)
            {
                minn+=(temp-1)*i;
                maxx+=temp*i;
            }
            else 
            {
                minn+=temp*i;
                maxx+=temp*i;
            }
        i = i*10;
        a/=10;    
    }
}

int main()
{
    cin >> a >> b;
    solve(a);
    solve(b);
    cout << minn << " " << maxx << endl;
    return 0;    
}