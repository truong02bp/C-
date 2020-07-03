#include<iostream>
using namespace std;

int n,in[1005],pre[1005],index;

int search(int start , int end , int value)
{
    for (int i=start;i<=end;i++)
        if (in[i] == value)
            return i;
    return 0;        
}

void post(int start , int end)
{
    if (start > end)
        return;
    int i = search(start,end,pre[index++]);
    post(start,i-1);
    post(i+1,end);
    cout << in[i] <<" ";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        index=0;
        cin >> n;
        for (int i=0;i<n;i++)
            cin >> in[i];
        for (int i=0;i<n;i++)
            cin >> pre[i];    
        post(0,n-1);    
        cout << endl;
    }
    return 0;
}