#include <iostream>
using namespace std;

int n, k, stop;

void sinh(int a[])
{
    int i = k, j, S, D, R;
    while (i > 0 && a[i] == 1)
        i--;
    if (i > 0)
    {
        a[i] -= 1;
        D = k - i + 1;
        R = D / a[i];
        S = D % a[i];
        k=i;
        if (R > 0)
        {
            for (j = i + 1; j <= i + R; j++)
                a[j] = a[i];
            k += R;
        }
        if (S > 0)
        {
            k++;
            a[k] = S;
        }
    }
    else
    {
        stop = 1;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stop = 0;
        cin >> n;
        int a[100];
        k = 1, a[k] = n;
        
        while (stop==0)
        {
            if (k==1)
                cout <<"("<<a[k]<<") ";
            else
            {
                cout <<"(";
            for (int i=1;i<k;i++)
                cout <<a[i]<<" ";
            cout <<a[k]<<") ";
            }
            sinh(a);
        }
        cout << endl;
    }
    return 0;
}