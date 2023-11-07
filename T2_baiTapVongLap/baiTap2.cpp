#include<iostream>
using namespace std;

/*
	Nhập số nguyên dương N, tính tổng các chữ số trong N
	Ví dụ: N = 12345 -> Tổng = 1 + 2 + 3 + 4 + 5 = 15
*/

/*
	12345 % 10 -> 5
	12345 / 10 -> 1234
	1234  % 10 -> 4
	1234  / 10 -> 123
	123   % 10 -> 3
	123   / 10 -> 12
	12	  % 10 -> 2
	12	  / 10 -> 1
	1	  % 10 -> 1
	1	  / 10 -> 0
*/

int main2() {
	int n;
	int S = 0;
	cin >> n;
	do {
		int soDu;
		soDu = n % 10;
		n = n / 10;
		S += soDu;
	} while (n > 0); // tức là n < 0 sẽ thoát vòng lặp
	cout << "Ket qua la " << S;
	return 0;
}