// Hàm ảo
#include<iostream>

using namespace std;

class hinh {
public:
	virtual void veHinh() {
		cout << "Ve hinh" << endl;
	}
};

class HinhTron : public hinh {
	int banKinh;
public:
	void veHinh() {
		cout << "Ve hinh tron" << endl;
	}
};

int main() {
	hinh* h = new HinhTron;
	h->veHinh(); // Ve hinh
	/* muốn hiển thị "Ve hinh tron" thì ta thêm
	virtual trước void dòng 8 để báo nó rằng đây
	là hàm ảo  */
	// Ve hinh tron
	return 0;
}