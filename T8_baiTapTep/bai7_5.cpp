#include<iostream>
#include<string>
#include<fstream>
#define size 100

using namespace std;

struct thongtinsach {
	string tensach;
	int namxb, sl, giaban;
};

int main5() {
	int n;
	thongtinsach a[size];
	ifstream finp;
	finp.open("book.inp");
	if (finp.fail()) {
		cout << "khong mo duoc file";
	}
	while (!finp.eof()) {
		finp >> n;
		for (int i = 0; i < n; i++) {
			finp.ignore();
			getline(finp, a[i].tensach);
			finp >> a[i].namxb;
			finp >> a[i].sl;
			finp >> a[i].giaban;
		}
	}
	int doanhthu, dem = 0;
	for (int i = 0; i < n; i++) {
		doanhthu = a[i].sl * a[i].giaban;
		if (doanhthu >= 1000) {
			dem++;
		}
	}
	finp.close();
	//nhap vao file
	ofstream fout;
	fout.open("book.out");
	if (fout.fail()) {
		cout << "khong mo duoc file";
	}
	fout << dem << endl;
	for (int i = 0; i < n; i++) {
		doanhthu = a[i].sl * a[i].giaban;
		if (doanhthu >= 1000) {
			fout << a[i].tensach << endl;
		}
	}
	fout.close();
	return 0;
}