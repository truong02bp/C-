#include<iostream>
#include"KhachHang.h"
using namespace std;

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
    cin.ignore();
    cout <<"Nhap email : ";
    getline(cin,email);
    cin.ignore();
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
    this->maKH = maKh;
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
