#include<iostream>
using namespace std;

/*
Có dạng:
	<Điều kiện> ? <Biểu thức 1> : <Biểu thức 2>
	Nếu <Điều kiện> True -> thực hiện 1
					False -> thực hiện 2
*/

int main3() {
	int a;
	cout << "Nhap so: ";
	cin >> a;
	cout << (a%2==0 ? " la so chan" : "la so le");
	return 0;
}