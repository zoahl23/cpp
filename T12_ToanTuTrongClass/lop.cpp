#include<iostream>
#include<string>

using namespace std;

class SinhVien {
private:
	string ten;
	int sdt;
public:
	void nhapdl();
	void xuatdl();
};

void SinhVien::nhapdl() {
	cin.ignore();
	cout << "Nhap ten: ";	getline(cin, ten);
	cout << "Nhap so dien thoai: ";	cin >> sdt;
}

void SinhVien::xuatdl() {
	cout << ten << endl;
	cout << sdt << endl;
}

class DS_SV {
public:

};


int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	SinhVien a[100];
	for (int i = 0; i < n; i++) {
		a[i].nhapdl();
	}
	for (int i = 0; i < n; i++) {
		a[i].xuatdl();
	}
	return 0;
}