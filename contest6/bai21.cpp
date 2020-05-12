#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int n,a[100005],cnt[100005];

bool cmp(int i , int j)
{
    if (cnt[i]==cnt[j])
        return i < j;
    return cnt[i] > cnt[j];
}
void result()
{
    sort(a,a+n,cmp);
        for (int i=0;i<n;i++)
            cout << a[i] <<" ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(cnt,0,sizeof(cnt));
        cin >> n;
        for (int i=0;i<n;i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        result();
    }
    return 0;
}