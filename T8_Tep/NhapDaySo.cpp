#include <iostream>
#include <fstream>
using namespace std;

int main4() {
	int n;
	ofstream fout;
	fout.open("dayso.txt"); // mo file
	if (fout.fail()) { // tra ve True neu ko mo được
		cout << "Khong mo file thanh cong !"; return 0;
	}
	cout << "Cho so luong so: ";
	cin >> n;
	cout << "Nhap cac so: " << endl;
	int x;
	for (int i = 0; i < n; i++) {
		cout << "So thu " << i << ": ";
		cin >> x;  // nhap so tu ban phim
		fout << x << " "; // ghi vao file fout
	}
	// fout.put(ch): ghi 1 kí tu ch ra file fout
	cout << "Chuong trinh da ket thuc !" << endl;
	cout << "Mo file dayso.txt de xem ket qua !" << endl;
	fout.close(); // đóng file
	return 0;
}