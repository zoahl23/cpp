#include<iostream>
#include<time.h>	//2 thư viện chọn số ngẫu nhiên
#include<stdlib.h> //
using namespace std;

#define r 5
#define c 5

int main7() {
	srand(time(NULL));
	int M[r][c];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			M[i][j] = rand() % 100;
		}
	}
	cout << "Mang sau khi nhap ngau nhien: " << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << M[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "Ban muon xuat dong nao: ";
	int rows;
	cin >> rows;
	for (int j = 0; j < c; j++) { //chạy từ j -> c
		cout << M[rows][j] << "\t"; 
	}
	cout << "\nBan muon xuat cot nao: ";
	int cols;
	cin >> cols;
	for (int i = 0; i < r; i++) { //chạy từ i -> r
		cout << M[i][cols] << "\n";
	}
	// Nếu ma trận vuông, xuất đường chéo chính, phụ
	if (r == c) {
		cout << "\nDuong cheo chinh: \n";
		for (int i = 0; i < r; i++) {
			cout << M[i][i] << "\t";
		}
		//Đường chéo phụ là ngc với chéo chính
		//Giống chữ X, chéo chính là \ chéo phụ là /
		cout << "\nDuong cheo phu: \n";
		for (int i = 0; i < r; i++) {
			cout << M[i][r - i - 1] << "\t";
		}
	}
	return 0;
}