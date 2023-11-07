#include<iostream>
using namespace std;

/*
	Cú pháp thực hiện:

	do{
		sta;
	}while (exp);

	nó thực hiện sta, và so sánh với điều kiện exp,
		nếu exp True sẽ thực hiện lại sta;
		nếu exp False sẽ thoát ra khỏi vòng lặp;
*/

int main3() {
	int a;
	do {
		cout << "Nhap so duong ";
		cin >> a;
	} while (a < 0);

	cout << "Ban nhap dung roi\n";
	return 0;
}