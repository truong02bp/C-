#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string Hieu(string x, string y)
{
    int a[1000], b[1000], c[1000];
    int lx = x.length(), ly = y.length();
    for (int i = 0; i < x.length(); i++)
        a[i] = x[i] - '0';
    for (int i = 0; i < y.length(); i++)
        b[i] = y[i] - '0';
    for (int i = lx - 1; i >= lx - ly; i--)
        b[i] = b[i - (lx - ly)];
    for (int i = 0; i < lx - ly; i++)
        b[i] = 0;
    int nho = 0;
    for (int i = lx - 1; i >= 0; i--)
    {
        c[i] = a[i] - b[i] - nho;
        if (c[i] < 0)
        {
            nho = 1;
            c[i] += 10;
        }
        else
        {
            nho = 0;
        }
    }
    string kq = "";
    for (int i = 0; i < lx; i++)
        kq += c[i] + '0';
    return kq;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x, y;
        cin >> x >> y;
        if (x.length() < y.length())
            cout << Hieu(y, x) << endl;
        else
        {
            if (x.length() > y.length())
                cout << Hieu(x,y) << endl;
            else
            {
                int kt = 0;
                for (int i = 0; i < x.length(); i++)
                {
                    if (x[i] - y[i] < 0)
                    {
                        kt = 1;
                        cout << Hieu(y, x) << endl;
                        break;
                    }
                    if (x[i]-y[i]>0)
                    {
                        kt=1;
                        cout << Hieu(x,y) << endl;
                        break;
                    }
                }
                if (kt == 0)
                    cout << "0" << endl;
            }
        }
    }
    return 0;
}