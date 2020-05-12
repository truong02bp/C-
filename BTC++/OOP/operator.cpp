#include<iostream>
using namespace std;

int GCD(int x , int y)
{
    int temp;
    while (y!=0)
    {
        temp = x%y;
        x = y;
        y = temp;
    }
    return x;
}
class PhanSo
{
    private:
        int tu,mau;
    public:
        void Nhap();
        void hienThi()
        {
            cout << tu <<" / " << mau;
        }
        PhanSo operator +(PhanSo);
        PhanSo operator *(PhanSo);
};
void PhanSo::Nhap()
{
    cout << " tu = ";
    cin >> tu;
    cout << " mau = ";
    cin >> mau;
}
PhanSo PhanSo::operator+(PhanSo p)
{
    PhanSo kq;
    kq.tu = this->tu * p.mau + this->mau*p.tu;
    kq.mau = this->mau*p.mau;
    return kq;
}
PhanSo PhanSo::operator*(PhanSo p)
{
    PhanSo kq;
    kq.tu = this->tu * p.tu;
    kq.mau = this->mau * p.mau;
    int UCLN = GCD(kq.tu , kq.mau);
    kq.tu/=UCLN;
    kq.mau/=UCLN;
    return kq;
}
int main()
{
    PhanSo ps1,ps2;
    ps1.Nhap();
    ps2.Nhap();
    PhanSo kq,kq2;
    kq = ps1+ps2;
    kq.hienThi();
    kq2 = ps1*ps2;
    cout << endl;
    kq2.hienThi();
    return 0;
}