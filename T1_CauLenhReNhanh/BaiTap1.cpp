#include<iostream>
using namespace std;

/*
	Nhập vào số điện tiêu thụ. Tính tiền điện phải trả
với công thức tính sau:
	a, 100 kwh định mức đầu tiên là 600 đ/kwh
	b, Từ 101 kwh đến 150 kwh có giá 700 đ/kwh
	c, Từ 151 kwh đến 200 kwh có giá 900 đ/kwh
	d, Từ 201 kwh trở đi có giá 1100 đ/kwh
*/

int main5() {
	int kwh, tien;
	int a = 600, b = 700, c = 900, d = 1100;
	cout << "Nhap so dien: ";
	cin >> kwh;

	if (kwh <= 100) {
		tien = kwh*a;
	}
	else if (kwh <= 150) {
		tien = 100 * a + (kwh - 100) * b;
	}
	else if (kwh <= 200) {
		tien = 100 * a + 50 * b + (kwh - 150) * c;
	}
	else {
		tien = 100 * a + 50 * b + 50 * c + (kwh - 200) * d;
	}
	cout << "So tien ban phai tra la: " << tien;

	return 0;
}