#include<iostream>
using namespace std;

/*
	Quá trình code phía dưới chạy:
	ví dụ nhập n = 5
	B1: nó sẽ check xem i <= n ko; 1 <= 5 True
		nó sẽ chạy cái bên trong là 
		S = S + i = 0 + 1 = 1; 
		i++ = 1 + 1 = 2;
	B2: nó sẽ check xem i <= n ko; 2 <= 5 True
		nó sẽ chạy cái bên trong là 
		S = S + i = 1 + 2 = 3; 
		i++ = 2 + 1 = 3;
	...
	B5: nó sẽ check xem i <= n ko; 5 = 5 True
		nó sẽ chạy cái bên trong là
		S = S + i = 10 + 5;
		i++ = 5 + 1 = 6;
	B6: nó sẽ check xem i <= n ko; 6 <= 5 False
		nó sẽ thoát khỏi vòng while
*/

int main2() {
	int n;
	int S = 0;
	int i = 1;
	cout << "Nhap 1 so: ";
	cin >> n;
	while (i <= n) {
		S += i; i++;
	}
	cout << "Tong = " << S << endl;
	return 0;
}