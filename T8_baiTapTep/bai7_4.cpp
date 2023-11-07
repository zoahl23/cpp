#include<iostream>
#include<fstream>
#include<math.h>
#define size 100
using namespace std;

int main4() {
	int n, m, a[size][size];
	ifstream finp;
	finp.open("chess.inp");
	if (finp.fail()) {
		cout << "khong mo duoc file";
	}
	while (!finp.eof()) {
		finp >> n;
		finp >> m;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				finp >> a[i][j];
			}
		}
	}
	int s = 0;
	for (int i = 0; i < n; i++) {
		int max = a[i][0];
		for (int j = 0; j < m; j++) {
			if (a[i][j] > max) {
				max = a[i][j];
			}
		}
		s += max;
	}
	// nhap vao file
	ofstream fout;
	fout.open("chess.out");
	if (fout.fail()) {
		cout << "khong mo duoc file";
	}
	fout << s;
	return 0;
}