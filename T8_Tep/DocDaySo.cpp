#include <iostream>
#include <fstream>
using namespace std;

int main3() {
	ifstream finp;
	finp.open("dayso.txt");
	if (finp.fail()) {
		cout << "Khong mo file thanh cong !"; return 0;
	}
	cout << "Day so doc duoc tu file la: " << endl;
	int x, tong = 0;
	while (!finp.eof()) {
		finp >> x; // giong dung cin
		if (finp.eof()) { break; } // dung luon khi eof() = true
		tong = tong + x;
		cout << x << " "; // hien thi ket qua len man hinh
	}
	cout << endl << "Tong cua day so doc duoc la: " << tong;
	return 0;
}