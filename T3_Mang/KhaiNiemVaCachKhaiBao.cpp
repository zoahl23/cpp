#include<iostream>
using namespace std;

// DỄ LẮM, TIN TAO

/*
	- Mảng là tập hợp các biến có cùng kiểu dữ liệu

	Ví dụ:
		Thay vì khai báo kiểu này:
		a=1,b=2,c=3  rất là mất thời gian

		Ta có thể khai báo a[3]
		a[0]=1;...
		nên nhớ khi gọi mảng nên bắt đầu gọi từ
		số 0 -> n-1 chứ đừng gọi từ 1 nha sai đó
		
		Ví dụ mảng 3 số ta muốn gọi ở ô 2
		thì phải gọi là a[1] chứ ko phải a[2] nhé

	- Cú pháp, ví dụ int a[5]

			    a[0]  a[1]  a[2]  a[3]  a[4]
			a |		|	  |		|	  |		|
			    
				khoảng trống ở trên là để nhập
				giá trị vô

	- Kích thước của mảng được tính theo công thức:

		Ví dụ:
	int n[100];  giả sử int chiếm 2 bytes
	Mảng n có kích thước là:
		2 bytes * 100 = 200 bytes

	- Mảng là 1 biến thông thường thôi
		Ví dụ:
		int n[3];
		n[0] = 2			 gán 2 cho phần tử n[0]
		n[1] = n[0] + 3		 n[1] có giá trị 5
		n[2] = n[0] + n[1]	 n[2] có giá trị 7
*/

int main2() {
	int a[3];
	a[0] = 3;
	a[1] = 6;
	a[2] = 7;
	cout << a[0] << endl; // hiển thị 3
	cout << a[1] << endl; // hiển thị 6
	cout << a[2] << endl; // hiển thị 7

	// Khai báo và khởi tạo mảng 1 chiều
	int n[] = { 2,-4,6,7,-5 };
	cout << n[0] << endl; // hiển thị 2
	cout << n[3] << endl; // hiển thị 7
	return 0;
}