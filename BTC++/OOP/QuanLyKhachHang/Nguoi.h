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