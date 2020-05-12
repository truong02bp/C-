#include<iostream>
#include"Nguoi.h"
using namespace std;

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