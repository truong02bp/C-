#include<iostream>
using namespace std;
long long a,b,maxx=0,minn=0;

void result(long long a)
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
        {
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
        }
        i*=10;
        a/=10;
    }
}

int main()
{
    cin >> a >> b;
    result(a);
    result(b);
    cout << minn <<" "<< maxx;
    return 0;
}