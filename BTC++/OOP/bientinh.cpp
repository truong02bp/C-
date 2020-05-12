// static class variable : dữ liệu dùng chung của class , chứ không phỉa của đối tượng cụ thể
// dùng khi cần duy nhất 1 dữ liệu
// chỉ biến static cần được cập nhật
// tương tự như iến toàn cục nhưng có phạm vi class
// chỉ có thể truy cập được từ các đối tượng trong cùng 1 class
#include<iostream>
using namespace std;

class Phong{
private:
    int ID;
    int kieuPhong; //
    float giaPhong;
    static int count; // bien tinh
public:
    static void tangCount()
    {
        count++;
    }
    void Nhap();
    void hienThi()
    {
        cout << ID <<", " << kieuPhong <<", " << giaPhong << endl;
    }
};
int Phong:: count=100;
void Phong::Nhap()
{
//    cout <<"ID = ";
//    cin >> ID;
    ID = count;
    tangCount();
    do
    {
        cout <<"Kieu phong (1 : p don , 2 : p don , 3 : p vip" << endl;
        cin >> kieuPhong;
    } while (kieuPhong>3 || kieuPhong <1);
    do 
    {
        cout <<" gia tien = " << endl;
        cin >> giaPhong;
    }
    while (giaPhong < 0);
    
}
int main()
{
    Phong a,p;
    a.hienThi();
    p.Nhap();
    p.hienThi();
    return 0;
}