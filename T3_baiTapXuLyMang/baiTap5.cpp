#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

/*
	Viết chương trình nhập vào một mảng số tự nhiên. 
	Hãy xuất ra màn hình: 
	- Dòng 1: Xuất toàn bộ mảng.
	- Dòng 2: Gồm các số lẻ, tổng có bao nhiêu số lẻ.
	- Dòng 3: Gồm các số chẵn, tổng có bao nhiêu số chẵn.
	- Dòng 4: Gồm các số nguyên tố.
*/

#define n 5

int main5() {
	srand(time(NULL));
	int M[n];
	for (int i = 0; i < n; i++) {
		M[i] = rand() % 100;
	}
	cout << "Du lieu toan bo mang: \n";
	for (int i = 0; i < n; i++) {
		cout << M[i] << "\t";
	}
	int soLe = 0;
	cout << "\nCac so le cua mang: \n";
	for (int i = 0; i < n; i++) {
		if (M[i] % 2 != 0) {
			cout << M[i] << "\t";
			soLe++;
		}
	}
	cout << "\nSo so le la: " << soLe << endl;
	int soChan = 0;
	cout << "\nCac so chan cua mang: \n";
	for (int i = 0; i < n; i++) {
		if (M[i] % 2 == 0) {
			cout << M[i] << "\t";
			soChan++;
		}
	}
	cout << "\nSo so chan la: " << soChan << endl;
	cout << "\nCac so nguyen to trong mang: \n";
	for (int i = 0; i < n; i++) {
		int dem = 0;
		for (int j = 1; j <= M[i]; j++) {
			if (M[i] % j == 0) {
				dem++;
			}
		}
		if (dem == 2) {
			cout << M[i] << "\t";
		}
	}
	
	return 0;
}