#include<iostream>
#include<time.h>		//Hai thư viện in số ngẫu nhiên
#include<stdlib.h>	   //đỡ phải nhập nhiều
using namespace std;

/*
	Cú pháp

	type tênMang [rows][cols];

	cols: số cột;
	rows: số hàng;

	Ví dụ:  int num[2][3]

	bảng 6 ô nè:

			|0	|1	|2	|
		0	|	|	|	|
		1	|	|	|	|
*/

#define rows 3
#define cols 4

int main6() {
	srand(time(NULL));
	// Visual hình như ko cho nhập số ptu trong mảng huhu
	int M[rows][cols];
	for (int i = 0; i < 3; i++) {  // chạy theo dòng
		for (int j = 0; j < 4; j++) { // chạy theo cột
			M[i][j] = rand() % 100;
		}
	}
	cout << "Mang sau khi nhap ngau nhien: \n";
	for (int i = 0; i < 3; i++) {  // chạy theo dòng
		for (int j = 0; j < 4; j++) { // chạy theo cột
			cout << M[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}