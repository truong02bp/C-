#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

class Nguoi
{
protected:
    string hoTen,email,sdt;
};
class KhachHang : public Nguoi
{
    int ma,kieuPhong;
    string moTa;
    static int count;
public:
    void TangCount();
    void nhap();
    void inFile();
    void outFile();
    void xuat();
    friend class BangSapXep;
};
void KhachHang::TangCount()
{
    count++;
}
int KhachHang::count=1000;
void KhachHang::nhap()
{
    this->ma = count;
    TangCount();
    cout <<"Ten: ";
    getline(cin,hoTen);
    cout <<"Email : ";
    getline(cin,email);
    cout <<"SDT : ";
    getline(cin,sdt);
    cout <<"Kieu Phong : ";
    cin >> kieuPhong;
    cin.ignore();
    cout <<"Mo ta : ";
    getline(cin,moTa);
}
ifstream inn("KH.txt");
void KhachHang::inFile()
{
    inn >> ma;
    inn.ignore();
    getline(inn,hoTen);
    getline(inn,email);
    getline(inn,sdt);
    inn >> kieuPhong;
    inn.ignore();
    getline(inn,moTa);
}

void KhachHang::outFile()
{
    ofstream out("KH.txt",ios::app);
    out << endl;
    out << ma << endl;
    out << hoTen << endl;
    out << email << endl;
    out << sdt << endl;
    out << kieuPhong << endl;
    out << moTa;
    out.close();
}
void KhachHang::xuat()
{
    cout <<"ID : " << ma << endl;
    cout <<"Ten: " << hoTen << endl;
    cout <<"Email : " << email << endl;
    cout <<"SDT : " << sdt << endl;
    cout <<"Kieu Phong : " << kieuPhong << endl;
    cout <<"Mo ta : " << moTa << endl;
}
class Phong
{
protected:
    string maPhong;
    int kieuPhong;
    int mucTienThue;
public:
    void nhap();
    void inFile();
    void outFile();
    void xuat();
    int getMucTien()
    {
        return this->mucTienThue;
    }
    friend class BangSapXep;
};
void Phong::nhap()
{
    cout <<"Ma phong : ";
    getline(cin,maPhong);
    cout <<"Kieu phong : ";
    cin >> kieuPhong;
    cout <<"Muc Tien : ";
    cin >> mucTienThue;
    cin.ignore();
}
ifstream in("PH.txt");
void Phong::inFile()
{
    in.ignore();
    getline(in,maPhong);
    in >> kieuPhong;
    in >> mucTienThue;
}
void Phong::outFile()
{
    ofstream outt("PH.txt",ios::app);
    outt << endl;
    outt << maPhong << endl;
    outt << kieuPhong << endl;
    outt << mucTienThue;
    outt.close();
}
void Phong::xuat()
{
    cout <<"Ma phong : " << maPhong << endl;
    cout <<"Kieu phong : " << kieuPhong << endl;
    cout <<"Muc Tien : " << mucTienThue << endl;
}
/*class BangSapXep
{
protected:
    KhachHang a;
    vector<Phong> b;
    vector<int> soNgayThue;
public:
    void setKhachHang(KhachHang a)
    {
        this->a = a;
    }
    void SapXep();
    void outFile();
};
void BangSapXep::SapXep()
{
    ifstream in("PH.txt");
    while (!in.eof())
    {
        Phong p;
        p.inFile();
        if (a.kieuPhong==p.kieuPhong)
        {
            int soNgay;
            cout <<"Nhap so ngay thue phong "<<p.maPhong << endl;
                cin >> soNgay;
            b.push_back(p);
            soNgayThue.push_back(soNgay);
        }
    }
    in.close();
}
void BangSapXep::outFile()
{
    ofstream out("BangSapXep.txt",ios::app);
    out << a.ma;
    for (int i=0;i<b.size();i++)
        out << endl <<"phong : "<< b[i].maPhong << " so ngay thue : " << soNgayThue[i];
    out.close();
}
*/
int main()
{
    int sl;
    cout <<"Nhap so phong can them : ";
    cin >> sl;
    cin.ignore();
    for (int i=0;i<sl;i++)
    {
        Phong p;
        p.nhap();
        p.outFile();
    }
    while (!in.eof())
    {
        Phong p;
        p.inFile();
        //if (p.getMucTien()>1000000)
        p.xuat();
    }
    in.close();
    cout << "Nhap so khach hang can them : ";
    int sl2;
    cin >> sl2;
    cin.ignore();
    for (int i=0;i<sl2;i++)
    {
        KhachHang k;
        k.nhap();
        k.outFile();
    }
    cout <<"*******************************"<<endl;
    while (!inn.eof())
    {
        KhachHang k;
        k.inFile();
        k.xuat();
        /*BangSapXep a;
        a.setKhachHang(k);
        a.SapXep();
        a.outFile();
        */
    }
    inn.close();
    return 0;
}