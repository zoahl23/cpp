#include<iostream>
using namespace std;

/*
	void ham(int x, int y = 1){
		cout << (x + y);
	}

	y = 1 chính là Parameter mặc định, bởi nếu mình truyền
	gtri cho y thì nó sẽ dùng còn nếu ko truyền thì nó 
	dùng cái mặc định y = 1

	ví dụ
	ham(9, 2) -> 11   gtri x = 9 và y = 2

	ham(9)   -> 10   gtri x = 9 và y = 1 do ko truyền cho
					 y nên nó lấy gtri mặc định
*/

void hamGiDo(int x, int y = 1) {
	cout << (x + y) << endl;
}

int main3() {
	hamGiDo(9);
	hamGiDo(9, 2);
	return 0;
}