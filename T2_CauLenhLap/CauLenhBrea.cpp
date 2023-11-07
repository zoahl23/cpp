#include<iostream>
using namespace std;

/*
	- Lệnh Break gặp là thoát ngang luôn, ko chờ 1 ai
	- Không dùng break bên ngoài vòng lặp như while,
	do .. while, for, switch, v.v.
*/

// Nhập số nguyên N, tính từ 1->n, tổng >=9 thì dừng

int main4() {
	int n;
	int S = 0;
	cout << "Nhap so nguyen: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		S += i;
		if (S >= 9) {
			break;  // Thoát khỏi vòng lặp
		}
	}
	cout << "Ket qua la " << S;
	return 0;
}