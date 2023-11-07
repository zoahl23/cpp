#include<iostream>
using namespace std;

int tong2so(int a, int b);
void xuatDuLieu(int x);
void output();

int main1() {
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	int kq = tong2so(a, b);
	cout << "Ket qua la: " << kq << endl;
	int kq2 = tong2so(10, 11);
	cout << "kq2= " << kq2 << endl;
	int kq3 = tong2so(1, 5);
	xuatDuLieu(kq3);
	output();
	return 0;
}

int tong2so(int a, int b) {
	return a + b;
}

void xuatDuLieu(int x) {
	cout << x << endl; // void ko cần return
}

// hàm gọi hàm
void output() {
	int kq = tong2so(9, 10);
	xuatDuLieu(kq);
}