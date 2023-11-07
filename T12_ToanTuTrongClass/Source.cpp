#include<iostream>
#include<string>

using namespace std;

class SoPhuc {
private:
	int thuc, ao;
public:
	friend istream& operator >> (istream& in, SoPhuc& a);
	friend ostream& operator << (ostream& out, SoPhuc& a);
	SoPhuc operator + (SoPhuc a); // cach 1
	friend SoPhuc operator - (SoPhuc a, SoPhuc b); // cach 2
	// nhan chia tuong tu

	bool operator == (SoPhuc a);
	// > < >= <= != tuong tu;
	// dung friend bool cx dc nhg phai co 2 SoPhuc a,b
};

istream& operator >> (istream& in, SoPhuc& a) {
	in >> a.thuc >> a.ao;
	return in;
}

ostream& operator << (ostream& out, SoPhuc& a) {
	out << a.thuc << " " << a.ao;
	return out;
}

SoPhuc SoPhuc:: operator + (SoPhuc a) {
	SoPhuc t;
	t.thuc = this->thuc + a.thuc;
	t.ao = this->ao + a.ao;
	return t;
}

SoPhuc operator - (SoPhuc a, SoPhuc b) {
	SoPhuc h;
	h.thuc = a.thuc - b.thuc;
	h.ao = a.ao - b.ao;
	return h;
}

bool SoPhuc:: operator == (SoPhuc a) {
	return this->thuc == a.thuc && this->ao == a.ao;
	// thuc,ao cua SoPhuc nay phai == t/ao ma t so sanh
}

/* == Toan tu nhap xuat ==

 >>     <<
cout: ostream
cin: istream

========================*/

int main1() {
	SoPhuc a, b;
	cin >> a >> b;
	SoPhuc t = a + b;
	SoPhuc h = a - b;
	cout << t << endl << h << endl;

	if (a == b) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}