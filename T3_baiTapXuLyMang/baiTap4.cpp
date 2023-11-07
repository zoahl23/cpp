#include<iostream>
#include<time.h>	//
#include<stdlib.h> // 2 thư viện in ra số ngẫu nhiên
using namespace std;

/*
	Viết chương trình đổi vị trí dòng thành cột
	Ví dụ:
			1234		1291
			2558		2545
			9420   ==>  3528
			1586		4806
*/

#define m 3
#define n 4

int main4() {
	srand(time(NULL)); //đỡ phải nhập nhiều cho cực
	int M[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			M[i][j] = rand() % 100;
		}
	}
	cout << "Ma tran sau khi nhap: \n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << M[i][j] << "\t";
		}
		cout << endl;
	}
	int MT[n][m];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			MT[j][i] = M[i][j];
		}
	}
	cout << "Ma tran hoan vi la: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << MT[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}