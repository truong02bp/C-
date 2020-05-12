#include<iostream>
#include"Nguoi.h"
#include"KhachHang.h"
using namespace std;
int main()
{
    KhachHang a,b;
    a.Nhap();
    cout << a.getMaKh() << endl;
    b.Nhap();
    cout << b.getMaKh() << endl;
    return 0;
}