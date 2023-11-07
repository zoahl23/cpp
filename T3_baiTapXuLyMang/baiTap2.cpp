#include<iostream>
using namespace std;

/*
	Xuất ra
	- Phần tử lớn nhất của mảng
	- Phần tử nhỏ nhất của mảng
	- Tính tổng các ptử trong mảng
*/

#define n 5

int main2() {
	int M[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap gtri ptu cua " << i << ": ";
		cin >> M[i];
	}
	cout << "Mang sau khi nhap la: \n";
	for (int i = 0; i < n; i++) {
		cout << M[i] << "\t";
	}
	int max = M[0];
	for (int i = 1; i < n; i++) {
		if (M[i] > max) {
			max = M[i];
		}
	}
	int min = M[0];
	for (int i = 1; i < n; i++) {
		if (M[i] < min) {
			min = M[i];
		}
	}
	int S = 0;
	for (int i = 0; i < n; i++) {
		S += M[i];
	}
	cout << "\nMax: " << max << endl;
	cout << "\nMin: " << min << endl;
	cout << "\nTong: " << S << endl;
	return 0;
}