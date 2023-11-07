#include<iostream>
using namespace std;

/*
	Truyền tham trị là:                void ham1(int a)
	n=5 --> hàm nào đó đổi n=8 --> n=5
	khi truyền vào hàm, sau khi thoát ra giá trị ko đổi

	Truyền tham chiếu là:              void ham2(int &a)
	n=5 --> hàm nào đó đổi n=8 --> n=8
	khi truyền vào hàm, sau khi thoát ra gtri bị đổi
*/

void ham1(int x);    // tham trị
void ham2(int &x);   // tham chiếu

int main2() {
	int x = 5;
	cout << "x ban dau la: " << x << endl;
	ham1(x);
	cout << "Sau khi thoat khoi ham1: " << x << endl;
	ham2(x);
	cout << "Sau khi thoat khoi ham2: " << x << endl;
	return 0;
}

void ham1(int x) {
	x = 10;
	cout << "x trong ham 1 la: " << x << endl;
}

void ham2(int &x) {
	x = 10;
	cout << "x trong ham 2 la: " << x << endl;
}