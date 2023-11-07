#include<iostream>
using namespace std;

/*
	Tìm kiếm tuyến tính:
	Ví dụ:
	Với K là 1 số nhập từ bàn phím. Kiểm tra xem K:
		
		a, Có mặt trong mảng hay không?
		b, Xuất hiện bao nhiêu lần trong mảng?
*/

#define n 5 // tức là gán n=5 nha

int main4() {
	int M[n];
	cout <<"Nhap cac gia tri cho ptu: " << endl;
	for ( int i = 0; i < n; i++) {
		cout << "M[" << i << "]=";
		cin >> M[i];
	}
	cout << "Mang ban nhap la: " << endl;
	for (int i = 0; i < n; i++) {
		cout << M[i] << "\t";
	}

	
	int k;
	cout << "\nNhap k muon tim: ";
	cin >> k;
	bool ketQua = false;
	
	// ý a	 
	for (int i = 0; i < n; i++) {
		if (M[i] == k) {
			ketQua = true;
			break;		
		}
	}
	if (ketQua == true) {
		cout << "Co thay ";
	}
	else {
		cout << "Khong thay ";
	}

	// ý b
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (M[i] == k) {
			ketQua = true;
			dem++;
		}
	}
	if (ketQua == true) {
		cout << dem << " lan";
	}
	else {
		cout << "Khong thay ";
	}
	return 0;
}