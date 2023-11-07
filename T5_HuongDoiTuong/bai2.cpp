// Toán tử New và cấp phát bộ nhớ cho con trỏ
#include<iostream>

using namespace std;

int main3() {
	int* p;
	p = new int;	// cấp phát
	delete p;		// giải phóng
	return 0;
}