#include<iostream>
using namespace std;

/*
	Cú pháp thực hiện

	for (exp1; exp2; exp3){
		sta;
	}

	Đầu tiên nó sẽ chạy exp1 rồi tới exp2;
		exp2 nếu True, sẽ thực hiện sta, sau đó thực 
					   hiện exp3 và quay trở lại exp2
		exp2 nếu False, sẽ thoát ra khỏi vòng lặp
*/

/*
	Bất kì biểu thức nào trong 3 bThuc đều có thể vắng
		Ví dụ:	for(; i != 0;)	sta;
	Vòng lặp vô tận
		Ví dụ:	for(;;)	sta;
*/

// Tính tổng các số nguyên từ 1 -> n
int main1() {
	int i, n;
	int S = 0;
	cout << "Nhap so nguyen: ";
	cin >> n;
	for (i = 1; i <= n; i++) {
		S += i;
	}
	cout << "Ket qua la " << S;
	return 0;
}