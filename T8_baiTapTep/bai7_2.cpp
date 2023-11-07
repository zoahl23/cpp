#include<iostream>
#include<fstream>
#define size 1000
using namespace std;

int main2() {
	int n, a[size], b[size];
	ifstream finp;
	finp.open("thietbi.inp");
	if (finp.fail()) {
		cout << "khong mo duoc file";
	}
	while (!finp.eof()) {
		finp >> n;
		for (int i = 0; i < n; i++) {
			finp >> a[i];
		}
		for (int i = 0; i < n; i++) {
			finp >> b[i];
		}
	}
	// dong 1
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= 100) {
			s++;
		}
	}
	// dong 2
	int min = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	// ghi vao file
	ofstream fout;
	fout.open("thietbi.out");
	if (fout.fail()) {
		cout << "Khong mo duoc file";
	}
	fout << s << endl;
	for (int i = 0; i < n; i++) {
		if (a[i] == min) {
			fout << b[i] << " ";
		}
	}
	return 0;
}