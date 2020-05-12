#include<iostream>
#include<string>
#include<cstring>
#include<string>
using namespace std;

class SV{
    private:
		string name, sex, phone;
        int pId;
	public:
		static int id;
		void setId(int id){
			this->pId = SV::id++;
		}
		void setName(string name){
			this->name = name;
		}
		void setSex(string sex){
			this->sex = sex;
		}
		void setPhone(string phone){
			this->phone = phone;
		}
		
		int getId(){
			return this->pId;
		}
		string getName(){
			return this->name;
		}
		string getSex(){
			return this->sex;
		}
		string getPhone(){
			return this->phone;
		}
        SV(int id, string name , string sex, string phone){
			setId(id);
			setName(name);
			setSex(sex);
			setPhone(phone);
		}
		void xuat(){
			cout << "ID: " << getId() << endl;
			cout << "ten: " << getName() << endl;
			cout << "gioi tinh: " << getSex() << endl;
			cout << "phone num: " << getPhone() << endl;
			cout << "=======================" << endl;
		}
};

void getInfor(SV *sv, int n){
	string name, sex, phone;
	for(int i = 0; i<n; i++){
		getline(cin, name);
		getline(cin, sex);
		getline(cin, phone);
		SV s1(100, name , sex, phone);
		sv[i] = s1;		
	}
}

void xuatInfor(SV *sv, int n){
	for(int i = 0; i<n; i++){
		sv[i].xuat();
	}
}

int main(){
	int n;
	cin >> n;
	SV *sv;
	sv = new SV[n];
	getInfor(sv, n);
	xuatInfor(sv, n);
	return 0;
}