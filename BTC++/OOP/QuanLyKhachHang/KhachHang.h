#include<iostream>
#include"Nguoi.h"
using namespace std;

class KhachHang : public Nguoi
{
    protected:
        int maKH;
        int kieuPhongThue; // 1: phòng đơn  2: phòng đôi , 3: phòng vip
        string moTa;
        static int count;
    public:
    void TangCount();
    KhachHang();
    KhachHang(string , string , string , int , int , string );
    void Nhap();
    void setmaKh(int maKH);
    void setKieu(int kieuPhongThue);
    void setMota(string moTa);
    int getMaKh();
    int getKieu();
    string getMoTa();
};