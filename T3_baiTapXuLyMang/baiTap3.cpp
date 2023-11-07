#include<iostream>
using namespace std;

/*
	Viết chương trình nhập vào 1 dãy số theo thứ tự
	tăng dần, nhập sai thì yêu cầu nhập lại, in ra 
	màn hình khi nhập xong.
*/

#define n 5

int main3() {
	int M[n];
	int i = 0;
	while (i < n) {
		cout << "Nhap M[" << i << "]= ";
		cin >> M[i];
		if (i > 0 && M[i] <= M[i - 1]) {
			continue;
		}
		i++;
	}
	cout << "Du lieu ban vua nhap la: \n";
	for (int i = 0; i < n; i++) {
		cout << M[i] << "\t";
	}
	return 0;
}