#include<iostream>
using namespace std;

/*
	Ví dụ: Tạo một mảng nguyên a có n phần tử. Có giá trị
	là chỉ mục của nó. In ra màn hình.
*/

#define N 5 // tức là gán N = 5 nha

int main3() {
	int M[N]; //mảng M có N phần tử,
	
	cout << "Nhap gtri cho cac ptu: \n";
	for (int i = 0; i < N; i++) {
		cout << "M[" << i << "]=";
		cin >> M[i];
	}	cout << "Mang sau khi ban nhap: \n";
	for (int i = 0; i < N; i++) {
		cout << M[i] << "\t";
	}

	cout << "\nMang xuat nguoc: " << endl;
	for (int i = N - 1; i >= 0; i--) {
		cout << M[i] << "\t";
	}
	return 0;
}