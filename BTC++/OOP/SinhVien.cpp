#include<iostream>
#include<vector>
using namespace std;
class SinhVien{
private:
    string ten;
    string ho;
    int diem;

public :
    SinhVien()
    {

    }
    SinhVien(string ten , string ho , int diem)
    {
        this->ten = ten;
        this->ho = ho;
        this->diem=diem;
    }
    void setTen(string ten)
    {
        this->ten = ten;
    }
    string getTen()
    {
        return this->ten;
    }
    void setHo(string ho)
    {
        this->ho = ho;
    }
    string getHo()
    {
        return this->ho;
    }
    void setDiem(int diem)
    {
        this->diem=diem;
    }
    int getDiem()
    {
        return this->diem;
    }
    void showInfo()
    {
        cout << this->ten <<"\t" << this->ho <<"\t" << this->diem << endl;
    }
};
int main()
{
/*    vector<SinhVien> a;
    for (int i=0;i<3;i++)
    {
        cout <<"Nhap sinh vien thu " << i+1 <<" :" << endl;
        cout <<"Nhap ten : ";
        string ten;
        cin >> ten;
        fflush(stdin);
        cout <<"Nhap ho : ";
        string ho;
        getline(cin,ho);
        cout <<"Nhap diem : ";
        fflush(stdin);
        int diem;
        cin >> diem;
        SinhVien sv(ten,ho,diem);
        a.push_back(sv);
    }
    for (int i=0;i<a.size();i++)
        a[i].showInfo();
*/
    SinhVien *a;
    a = new SinhVien[100];
    for (int i=0;i<3;i++)
    {
        cout <<"Nhap sinh vien thu " << i+1 <<" :" << endl;
        cout <<"Nhap ten : ";
        string ten;
        cin >> ten;
        a[i].setTen(ten);
        fflush(stdin);
        cout <<"Nhap ho : ";
        string ho;
        getline(cin,ho);
        a[i].setHo(ho);
        cout <<"Nhap diem : ";
        fflush(stdin);
        int diem;
        cin >> diem;
        a[i].setDiem(diem);
    }
    for (int i=0;i<3;i++)
        a[i].showInfo();
    return 0;
}