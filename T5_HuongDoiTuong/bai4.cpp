// Hàm bạn
#include<iostream>

using namespace std;

class soPhuc {
private:
	int pThuc;
	int pAo;
public:
	soPhuc() {
		pThuc = 5;
		pAo = 3;
	}
	void xuat() {
		cout << pThuc << "," << pAo << endl;
	}
	friend void cong2sophuc(soPhuc a, soPhuc b);
	/* vì hàm void là hàm bạn của class số phức nên là
	có thể lấy gtri pThuc pAo của hàm bạn để dùng */
};

void cong2sophuc(soPhuc a, soPhuc b) {
	soPhuc c;
	c.pThuc = a.pThuc + b.pThuc;
	c.pAo = a.pAo + b.pAo;
	c.xuat();
}

int main5() {
	soPhuc a, b;
	cong2sophuc(a, b);
	return 0;
}