#include<iostream>
using namespace std;

class Nguoi
{
    protected:
        string hoTen,email,sdt;
    public:
        Nguoi();
        Nguoi(string hoTen , string email , string sdt);
        void setHoTen(string hoTen);
        string getHoTen();
        void setemail(string email);
        string getEmail();
        void setSDT(string sdt);
        string getSDT();
};
Nguoi::Nguoi(){}
Nguoi::Nguoi(string hoTen , string email , string sdt)
{
    this->hoTen = hoTen;
    this-> email = email;
    this->sdt = sdt;
}
void Nguoi::setHoTen(string hoTen)
{
    this->hoTen = hoTen;
}
string Nguoi::getHoTen()
{
    return this->hoTen;
}
void Nguoi::setemail(string email)
{
    this->email = email;
}
string Nguoi::getEmail()
{
    return this->email;
}
void Nguoi::setSDT(string sdt)
{
    this->sdt = sdt;
}
string Nguoi::getSDT()
{
    return this->sdt;
}
class KhachHang : public Nguoi
{
    protected:
        int maKH;
        int kieuPhongThue; // 1: phòng đơn  2: phòng đôi , 3: phòng vip
        string moTa;
        static int count;
    public:
    void TangCount();
    void Nhap();
    void setmaKh(int maKH);
    void setKieu(int kieuPhongThue);
    void setMota(string moTa);
    int getMaKh();
    int getKieu();
    string getMoTa();
};
void KhachHang::TangCount()
{
    count++;
}
void KhachHang::Nhap()
{
    maKH = count;
    TangCount();
    cout <<"Nhap ho ten : ";
    getline(cin,hoTen);
    cout <<"Nhap email : ";
    getline(cin,email);
    cout <<"Nhap sdt : ";
    getline(cin,sdt);
    cout <<"Nhap kieu phong thue : ";
    cin >> kieuPhongThue;
    cin.ignore();
    cout <<"Nhap mo ta : ";
    getline(cin,moTa);
}
int KhachHang :: count=1000;

void KhachHang::setmaKh(int maKH)
{
    this->maKH = maKH;
}
void KhachHang::setKieu(int kieu)
{
    this->kieuPhongThue = kieu;
}
void KhachHang::setMota(string moTa)
{
    this->moTa = moTa;
}
int KhachHang::getMaKh()
{
    return this->maKH;
}
int KhachHang::getKieu()
{
    return  this->kieuPhongThue;
}
string KhachHang::getMoTa()
{
    return this->moTa;
}
int main()
{
    KhachHang a,b;
    a.Nhap();
    cout << a.getMaKh() << endl;
    b.Nhap();
    cout << b.getMaKh() << endl;
    return 0;
}