#include<iostream>
#include<cmath>   // thấy có tính toán
using namespace std;

/*
	Tính S(x, n) = x + x^2/2! + x^3/3! + ... + x^n/n!

	phân tích đề bài ta thấy:
	tử số sẽ là x^i      (dùng hàm pow)
	mẫu số là i!

	Tính chất của giai thừa là nhân cộng dồn, ví dụ:
	3!= 1 * 2 * 3 = 6 nên là ta có thể dùng luôn i
	để tính giai thừa
*/

int main3() {
	double x;
	int n;
	double S = 0;
	int mauSo = 1;
	cin >> x >> n;
// nếu nó hiện sóng xanh tức là bạn chưa gán gtri cho nó
	for (int i = 1; i <= n; i++) {
		double tuSo = pow(x, i);
		mauSo = mauSo * i; 
		S += (tuSo / mauSo);
	}
	cout << "Ket qua la " << S;
	return 0;
}