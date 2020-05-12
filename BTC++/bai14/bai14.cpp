#include<iostream>
using namespace std;

int Check(int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << Check(n) << endl;
    }
    return 0;
}

int Check(int n)
{
    int sl=0,kt=0,i=2; // sl : so luong nhan tu 
    while (n>1)
    {
        if (n%i==0)
        {
            sl++; // nhan tu tang
            kt++; // so lan i xuat hien
            n/=i;
            if (kt>1) return 0; // i xuat hien hon 1 lan se loai
        }
        else
        {
            kt=0;
            i++;
        }
    }
    if (sl==3) return 1; // dung khi so luong = 3
    else
    {
        return 0;
    }
}