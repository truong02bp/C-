#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Nguoi
{
    protected:
        string ten;
        int tuoi,id;
    public:
        Nguoi()
        {
            ten="Null";
            tuoi=0;
            id = 100;
        }
        void setTen(string ten)
        {
            this->ten = ten;
        }
        string getTen()
        {
            return ten;
        }
        void setTuoi(int tuoi)
        {
            if (tuoi <=150 && tuoi>=0)
                this->tuoi=tuoi;
        }
        int getTuoi()
        {
            return tuoi;
        }
        int getID()
        {
            return id;
        }
};
class SinhVien : public Nguoi
{
    protected:
        int t,l,h;
        static int count;
    public:
        int getT()
        {
            return t;
        }
        int getL()
        {
            return l;
        }
        int getH()
        {
            return h;
        }
        void tangCount();
        void nhap();
        void hienThi();
};
int SinhVien::count=100;
void SinhVien::tangCount()
{
    count++;
}
void SinhVien::nhap()
{
    id = count;
    tangCount();
    cout << " Ten : ";
    getline(cin,ten);
    do{
        cout << "tuoi : ";
        cin >> tuoi;
    }while(tuoi>150 || tuoi < 0);
    do
    {
        cout << "Toan :";
        cin >> t;
    }
    while( t> 10 || t< 0);
    do
    {
        cout << " LY :";
        cin >> l;
    }
    while( l> 10 || l< 0);
    do
    {
        cout << "Hoa :";
        cin >> h;
    }
    while( h> 10 || h< 0);
    cin.ignore();
}
void SinhVien::hienThi()
{
    cout << id <<"\t" << ten << "\t" << tuoi <<"\t" << t <<"\t" << l <<"\t" << h << endl;
}
class Lop
{
    protected:
        int n;
        SinhVien ds[1000];
    public:
        void Nhap();
        void HienThi();
        void SapXepTen();
        SinhVien DiemMax();
};
void Lop::Nhap()
{
    cout <<" So luong : ";
    cin >> n;
    cin.ignore();
    for (int i=0;i<n;i++)
        ds[i].nhap();
}
void Lop::HienThi()
{
    for (int i=0;i<n;i++)
        ds[i].hienThi();
}
bool Ten(SinhVien a , SinhVien b)
{
    return a.getTen() < b.getTen();
}
void Lop::SapXepTen()
{
    sort(ds,ds+n,Ten);
}
bool Diem(SinhVien a , SinhVien b)
{
    return (a.getT()+a.getL()+a.getH()) < (b.getT()+b.getL()+b.getH());
}
SinhVien Lop::DiemMax()
{
    sort(ds,ds+n,Diem);
    return ds[n-1];
}
int main()
{
    Lop ds;
    ds.Nhap();
    ds.HienThi();
    SinhVien a = ds.DiemMax();
    a.hienThi();
    ds.SapXepTen();
    ds.HienThi();
    return 0;
}