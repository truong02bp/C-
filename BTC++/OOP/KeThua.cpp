#include<iostream>
using namespace std;

class Nguoi{
    private:
        string ten;
        int gioiTinh;
        char diaChi[100];
    public: 
        void Nhap();
        void hienThi()
        {
            cout << ten << "\t" << gioiTinh << "\t" << diaChi; 
        }
};
void Nguoi::Nhap()
{
    cout <<" Ten : ";
    getline(cin,ten);
    cout << "Gioi Tinh : ";
    cin >> gioiTinh;
    cout <<" Dia chi : ";
    cin >> diaChi;
}
class GiaoVien : public Nguoi
{
private:
    int luong;
    int gioLam;
    string chucVu;
public:
    void Nhap();
    void hienThi()
    {
        Nguoi::hienThi();
        cout <<"\t"<<luong<<"\t"<<gioLam<<"\t"<<chucVu;
    }
};
void GiaoVien::Nhap()
{
    Nguoi::Nhap();
    do
    {
        cout <<" Luong : ";
        cin >> luong;
    }
    while(luong < 0);
    cout <<" Gio lam : ";
    cin >> gioLam;
    fflush(stdin);
    cout << "Chuc Vu : ";
    getline(cin,chucVu);
}
int main()
{
    GiaoVien a;
    a.Nhap();
    a.hienThi();
    return 0;
}