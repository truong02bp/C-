#include<iostream>
#include<algorithm>

using namespace std;
int n;
int a[1005];
int b[1005];

void result()
{
    int rs = 1;
    for (int i=1;i<=n;i++)
    {
        b[i]=1;
        for (int j=1;j<i;j++)
            if (a[j] < a[i])
                b[i] = max(b[i],b[j]+1);
        rs = max(b[i],rs);
    }
    cout << rs << endl;
}
int main()
{
    cin >> n;
    for (int i=1;i<=n;i++)
        cin >> a[i];
    result();
}