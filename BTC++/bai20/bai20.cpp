#include<iostream>
using namespace std;

bool CheckUocSoLe(int n);
int So(int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << So(n) << endl;
    }
    return 0;
}

bool CheckUocSoLe(int n)
{
    int i;
    for (i=3;i<=n;i+=2) // kiểm tra các số lẻ
        if (n%i==0) return true; // chia hết cho 1 số lẻ thì đúng luônnnn
    return false;
}
int So(int n)
{
    if (n==1) return 1;
    int sum=0;
    for (int i=2;i<=n;i++)
        if (CheckUocSoLe(i)==true)
            sum++;
    return sum;
}
