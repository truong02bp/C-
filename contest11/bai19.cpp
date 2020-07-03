#include<iostream>
using namespace std;

int n,pre[1005],index;

void post(int Min , int Max)
{
    if (index == n)
        return;
    if (Min > pre[index] || Max < pre[index])
        return;
    int value = pre[index];
    index++;
    post(Min,value);
    post(value,Max);
    cout << value <<" ";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        index = 0;
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> pre[i];
        post(INT32_MIN,INT32_MAX);
        cout << endl;    
    }
    return 0;
}