// Overloading trong C++, tái sử dụng hàm
#include<iostream>

using namespace std;

int gttd(int a) {
	if (a < 0) {
		return -a;
	}
	else {
		return a;
	}
}

float gttd(float a) {
	if (a < 0) {
		return -a;
	}
	else {
		return a;
	}
}

int main6() {
	int a = 6;
	float b = -4.5;
	char c = 'a';
	cout << "Tri tuyet doi cua so nguyen: " << gttd(a);
	cout << endl;
	cout << "Tri tuyet doi cua so thuc: " << gttd(b);
	cout << endl;
	cout << "Tri tuyet doi cua ki tu: " << gttd(c);
	// nó rất thông minh, nó tìm cái hàm nào hợp với nó nó dùng
	return 0;
}