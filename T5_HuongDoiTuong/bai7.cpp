// Hàm hủy
#include<iostream>
#include<string>

using namespace std;

class Nguoi {
private:
	string ten;
	int tuoi;
public:
	// Hàm tạo không tham số
	Nguoi() {
		ten = "Nguyen Van B";
		tuoi = 19;
	}
	// Hàm hủy
	~Nguoi() {
		cout << "Huy doi tuong";
	}
	void troChuyen() {
		cout << "Xin chao \n";
	}
	void xuat() {
		cout << ten << endl << tuoi << endl;
	}
};

int main8() {
	Nguoi a;
	a.xuat();
	a.troChuyen();
	// Xin chao
	// Huy doi tuong

	// Tại sao ko gọi hàm hủy mà nó vẫn in ra?

	/* Tại vì nó mặc định được gọi khi hàm tạo hết
	hiệu lực */
	return 0;
}