#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int n;
struct toaDo
{
    int x;
    int y;
};
toaDo a[100005];
bool dk(toaDo a , toaDo b)
{
    return (a.y < b.y);
}
long double khoangCach(toaDo a , toaDo b)
{
    int x = a.x - b.x;
    int y = a.y - b.y;
    return sqrt(x*x + y*y);
}
void result()
{
    sort(a,a+n,dk);
    long double temp = khoangCach(a[0],a[1]);
    for (int i=1;i<n-1;i++)
    {
        long double x = khoangCach(a[i],a[i+1]);
        if (x < temp)
            temp = x;
    }
    printf("%0.6Lf",temp);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> a[i].x >> a[i].y;
        result();
        cout <<  endl;
    }
    return 0;
}