#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

class Nguoi
{
protected:
    string hoTen,email,sdt;
public:
    void setHoTen(string hoTen);
    void setEmail(string email);
    void setSdt(string sdt);
    string getHoTen();
    string getEmail();
    string getSdt();
};
void Nguoi::setHoTen(string hoTen)
{
    this->hoTen = hoTen;
}
void Nguoi::setEmail(string email)
{
    this->email = email;
}
void Nguoi::setSdt(string sdt)
{
    this->sdt = sdt;
}
string Nguoi::getHoTen()
{
    return this->hoTen;
}
string Nguoi::getEmail()
{
    return this->email;
}
string Nguoi::getSdt()
{
    return this->sdt;
}
class KhachHang : public Nguoi
{
    friend class BangSapXep;
protected:
    int id;
    int kieuPhong;
    string moTa;
    static int count;
public:
    void tangCount();
    void nhap();
    void xuat();
    void setKieuPhong(int kieuPhong);
    void setMoTa(string moTa);
    int getId();
    int getKieuPhong();
    string getMota();
};

void KhachHang::setKieuPhong(int kieuPhong)
{
    this->kieuPhong = kieuPhong;
}
void KhachHang::setMoTa(string moTa)
{
    this->moTa = moTa;
}
int KhachHang::getId()
{
    return this->id;
}
int KhachHang::getKieuPhong()
{
    return this->kieuPhong;
}
string KhachHang:: getMota()
{
    return this->moTa;
}
int KhachHang::count=1000;
void KhachHang::tangCount()
{
    count++;
}
ifstream in("KH.txt",ios::in);
void KhachHang::nhap()
{
    id = count;
    tangCount();
    getline(in,hoTen);
    getline(in,email);
    getline(in,sdt);
    in >> kieuPhong;
    in.ignore();
    getline(in,moTa);
}
void KhachHang::xuat()
{
    cout << hoTen <<"\t"<<email<<"\t"<<sdt<<"\t"<<id<<"\t"<<kieuPhong<<"\t"<<moTa << endl;
}
class Phong
{
    friend class BangSapXep;
protected:
    string maPhong;
    int kieuPhong;
    long long mucTien;
public:
    void nhap();
    void xuat();
    long long getMucTien()
    {
        return this->mucTien;
    }
};
ifstream inn("PH.txt",ios::app);
void Phong::nhap()
{
    getline(inn,maPhong);
    inn >> kieuPhong;
    inn >> mucTien;
    inn.ignore();
}
void Phong::xuat()
{
    cout << maPhong <<"\t"<<kieuPhong<<"\t"<<mucTien<<endl;
}


int main()
{
    vector<KhachHang> dskh;
    vector<Phong> dsp;
    while (!in.eof())
    {
        KhachHang a;
        a.nhap();
        dskh.push_back(a);
    }
    while (!inn.eof())
    {
        Phong b;
        b.nhap();
        dsp.push_back(b);
    }
    for (int i=0;i<dsp.size();i++)
        if (dsp[i].getMucTien()>1000000)
            dsp[i].xuat();
    for (int i=0;i<dskh.size();i++)
        dskh[i].xuat();
    return 0;
}