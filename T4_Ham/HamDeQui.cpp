#include<iostream>
using namespace std;

int tinhGiaiThua(int n);

int main() {
	int gt = tinhGiaiThua(5);
	cout << "5! = " << gt << endl;
	return 0;
}

int tinhGiaiThua(int n) {
	if (n <= 1) {
		return 1;
	}
	return n * tinhGiaiThua(n - 1);
	// cần tìm được điểm dừng, quy luật của chúng
}