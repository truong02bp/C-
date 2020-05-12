#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class SanPham
{
    protected:
        int ID;
        string tenSp;
        string xuatXu;
        int giaSp;
    public:
        void setId(int ID)
        {
            this->ID = ID;
        }
        int getId()
        {
            return this->ID;
        }
        void setTenSp(string tenSp)
        {
            this->tenSp = tenSp;
        }
        string getTenSp()
        {
            return this->tenSp;
        }
        void setXuatXu(string xuatXu)
        {
            this->xuatXu = xuatXu;
        }
        string getXuatXu()
        {
            return this->xuatXu;
        }
        void setGia(int giaSp)
        {
            this->giaSp = giaSp;
        }
        int getGia()
        {
            return this->giaSp;
        }
        SanPham()
        {

        }
        SanPham(int ID , string tenSp , string xuatXu , int giaSp)
        {
            this->ID = ID;
            this->tenSp = tenSp;
            this->xuatXu = xuatXu;
            this->giaSp = giaSp;
        }
        void Display()
        {
            cout << this->ID <<" " << this->tenSp <<" " << this->xuatXu <<" " << this->giaSp << endl;
        }

};
class SanPham2 : public SanPham
{
    private:
        int giamGia;
    public:
    void setGiamGia(int giamGia)
    {
        this->giamGia = giamGia;
    }
    int getGiamGia()
    {
        return this->giamGia;
    }
    SanPham2()
    {
    }
    SanPham2(int ID , string tenSp , string xuatXu , int giaSp , int giamGia) : SanPham(ID,tenSp,xuatXu,giaSp)
    {
        this->giamGia = giamGia;
    }
    void  Display()
    {
        cout << this->ID << "\t" << this->tenSp <<"\t"<< this->xuatXu<<"\t"<< this->giaSp <<"\t"<< this->giamGia << endl;
    }
};

bool Dkien(SanPham a , SanPham b)
{
    return a.getId() > b.getId();
}
int main()
{
/*    vector<SanPham> a;
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cout <<"Nhap san pham thu " << i+1 <<" : ";
        int ID;
        cin >> ID;
        fflush(stdin);
        string ten;
        getline(cin,ten);
        fflush(stdin);
        string xuatXu;
        getline(cin,xuatXu);
        fflush(stdin);
        int Gia;
        cin >> Gia;
        fflush(stdin);
        SanPham sp(ID,ten,xuatXu,Gia);
        a.push_back(sp);
    }
    sort(a.begin(),a.end(),Dkien);
    for (int j=0;j<a.size();j++)
        a[j].Display();
*/
    SanPham2 b(23,"HUY","YEAH",900,20);
    b.Display();
    return 0;
}