#include<iostream>
using namespace std;

/*
	- Lệnh continue sẽ ko thực hiện vòng lặp hiện tại
	mà nhảy qua vòng lặp kế tiếp luôn
	- Lệnh continue cũng chỉ đc dùng trong vòng lặp
	- Lệnh continue thường đi kèm với câu lệnh if
*/

// Nhập N, tính tổng 1->n ngoại trừ số 2, 4
int main5() {
	int i = 0, n = 5;
	int S = 0;
	do {
		i++;
		if (i == 2 || i == 4) {
			continue; // tức là ko thực hiện phía dưới
		}	S += i;
	} while (i < n);
	cout << "Ket qua la " << S;
	return 0;
}