#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main2() {
	ifstream finp;
	finp.open("DanhSach.txt"); // mo file
	if (finp.fail()) { // tra ve T neu mo file kh thanh cong
		cout << "Khong mo file thanh cong !";
		return 0;
	}
	string s;
	cout << "Du lieu doc duoc tu file la: " << endl;
	// doc du lieu tu file
	while (!finp.eof()) { // tra ve T neu doc den cuoi file
		getline(finp, s); // doc mot dong trong file
		cout << s << endl; // hien thi ket qua len man hinh
	}
	finp.close(); // ðóng file
	return 0;
}