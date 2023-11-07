#include<bits/stdc++.h>

using namespace std;

int tuc (int a, int b){
	if (b == 0) return a;
	return tuc (b, a % b);
}

class PhanSo {
	private:
		int tu, mau;
	public:
		PhanSo() {
			this->tu = 1;
			this->mau = 1;
		}
		PhanSo(int tu, int mau){
			this->tu = tu;
			this->mau = mau;
		}
		friend ostream& operator << (ostream& os, PhanSo a);
		friend istream& operator >> (istream& is, PhanSo& a);
		friend PhanSo operator + (PhanSo a, PhanSo b);
};

ostream& operator << (ostream& os, PhanSo a){
	os << a.tu << "/" << a.mau << endl;
	return os;
}

istream& operator >> (istream& is, PhanSo& a){
	is >> a.tu >> a.mau;
	return is;
}

PhanSo operator + (PhanSo a, PhanSo b){
	PhanSo tong;
	tong.tu = a.tu * b.mau + b.tu * a.mau;
	tong.mau = a.mau * b.mau;
	int g = tuc(tong.tu, tong.mau);
	tong.tu /= g;
	tong.mau /= g;
	return tong;
}

int main() {
	PhanSo a, b(1,1);
	cin >> a >> b;
	cout << a + b;
	return 0;
	
	// in: 123 456 12 34
	// out: 1609/2584
}
