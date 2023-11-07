#include<iostream>
#include<fstream>
#define size 100

// bai 7_1 trong file week 7

using namespace std;
int main6() {
	int m, n, a[size][size], b[size], c[size];
	ifstream finp;
	finp.open("diemanh.inp");
	if (finp.fail()) {
		cout << "Khong mo duoc file";
	}
	while (!finp.eof()) {
		finp >> m;
		finp >> n;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				finp >> a[i][j];
			}
		}
	}
	for (int i = 0; i < m; i++) {
		int min = a[i][0];
		for (int j = 0; j < n; j++) {
			if (a[i][j] < min) {
				min = a[i][j];
			}
		}
		b[i] = min;
	}
	for (int i = 0; i < m; i++) {
		int max = a[i][0];
		for (int j = 0; j < n; j++) {
			if (a[i][j] > max) {
				max = a[i][j];
			}
		}
		c[i] = max;
	}
	int minb = b[0];
	for (int i = 0; i < m; i++) {
		if (b[i] < minb) {
			minb = b[i];
		}
	}
	int maxc = c[0];
	for (int i = 0; i < m; i++) {
		if (c[i] > maxc) {
			maxc = c[i];
		}
	}
	int dem = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] < 70) {
				dem++;
			}
		}
	}
	// nhap du lieu
	ofstream fout;
	fout.open("diemanh.out");
	if (fout.fail()) {
		cout << "Khong mo duoc file";
	}
	fout << "Diem toi nhat: " << minb << endl;
	fout << "Diem sang nhat: " << maxc << endl;
	fout << "So diem anh nho hon 70: " << dem;
	fout.close();
	return 0;
}