#include<iostream>
using namespace std;

int main2() {
	int a;
	cout << "Nhap so nguyen: ";
	cin >> a;
	if (a > 0) {
		cout << a << " la so lon hon 0 \n";
	}
	else {
		if (a == 0) {
			cout << a << " la so 0 \n";
		}
		else {
			cout << a << " la so am \n";
		}
	}
	return 0;
}