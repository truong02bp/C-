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

int main()
{
    int sl;
    cout <<"Nhap so luong : ";
    cin >> sl;
    cin.ignore();
    for (int i=0;i<sl;i++)
    {
        KhachHang k;
        k.nhap();
        k.outFile();
    }
    vector<KhachHang> a;
    while (!inn.eof())
    {   
        KhachHang k;
        k.inFile();
        a.push_back(k);
    }
    for (int i=0;i<a.size();i++)
        a[i].xuat();
    return 0;
}