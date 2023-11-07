#include<iostream>
#include<string>

using namespace std;

class NhanVien {
private:
	string hoTen;
	int maSV;
	int tuoi;
	float diem;
public:
	void nhapDL() {
		cin.ignore();
		cout << "Nhap ten, masv, tuoi, diem: ";
		getline(cin, hoTen);
		cin >> maSV;
		cin >> tuoi;
		cin >> diem;
	}
	void xuatDL() {
		cout << hoTen << endl;
		cout << maSV << endl;
		cout << tuoi << endl;
		cout << diem << endl;
	}
};

int main22(){
	NhanVien a, b;
	a.nhapDL();
	b.nhapDL();
	a.xuatDL();
	b.xuatDL();
	return 0;
}