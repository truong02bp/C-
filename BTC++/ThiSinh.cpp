#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Candidate
{
    private:
        string ma,ten,ngay;
        double diemToan, diemVan , diemAnh;
    public:
        Candidate();
        Candidate(string ma , string ten , string ngay , double diemToan , double diemVan , double diemAnh);
        void nhap();
        void hienThi();
        void setMa(string ma)
        {
            this->ma = ma;
        }
        string getMa()
        {
            return this->ma;
        }
        void setTen(string ten)
        {
            this->ten = ten;
        }
        string getTen()
        {
            return this->ten;
        }
        void setNgay(string ngay)
        {
            this ->ngay = ngay;
        }
        string getNgay()
        {
            return this->ngay;
        }
};