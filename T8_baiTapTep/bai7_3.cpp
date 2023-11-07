#include<iostream>
#include<fstream>
#define size 100

using namespace std;

int main3() {
	int n, b[size];
	float a[size];
	ifstream finp;
	finp.open("tree.inp");
	if (finp.fail()) {
		cout << "khong mo duoc file";
	}
	while (!finp.eof()) {
		finp >> n;
		for (int i = 0; i < n; i++) {
			finp >> a[i];
		}
	}
	for (int i = 0; i < n; i++) {
		b[i] = i + 1;
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				float temp = a[i];
				a[i] = a[j];
				a[j] = temp;

				int tempb = b[i];
				b[i] = b[j];
				b[j] = tempb;
			}
		}
	}
	finp.close();
	// nhap vao file
	ofstream fout;
	fout.open("tree.out");
	if (fout.fail()) {
		cout << "khong mo duoc file";
	}
	for (int i = 0; i < n; i++) {
		fout << b[i] << " ";
	}
	fout << endl;
	for (int i = 0; i < n; i++) {
		fout << a[i] << " ";
	}
	fout.close();
	return 0;
}