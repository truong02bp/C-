#include<iostream>
using namespace std;

int a[10005],n;

void result()
{
    int i,i2=0,i3=0,i5=0,next2=2,next3=3,next5=5;
    a[0]=1;
    for (i=1;i<=10000;i++)
    {
        int temp = min(min(next2,next3),next5);
        a[i]=temp;
        if (temp==next2)
        {
            i2++;
            next2 = a[i2]*2;
        }
        if (temp==next3)
        {
            i3++;
            next3 = a[i3]*3;
        }
        if (temp==next5)
        {
            i5++;
            next5 = a[i5]*5;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    result();
    while (t--)
    {
        cin >> n;
        cout << a[n-1] << endl;
    }
    return 0;
}