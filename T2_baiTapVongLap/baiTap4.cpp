#include<iostream>
#include<cmath>
using namespace std;

/*
	Xuất số đảo của số nguyên dương n 
	Ví dụ 1234 -> 4321
*/

int main5() {
	int n;
	cin >> n;
	do {
		int soDu;
		soDu = n % 10;
		n = n / 10;
		cout << soDu;
	} while (n > 0);
	
	return 0;
}