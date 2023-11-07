#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>

using namespace std;

class SinhVien {
	friend class GiaoVien;
private:
	string id, ten, ns;
	double gpa;
	static int dem; // ko the gan dem = 0; o day
public:
	SinhVien();
	SinhVien(string id, string t, string n, double gpa);
	void xinchao() {
		cout << "Hello! \n";
	}
	void dihoc();

	~SinhVien();

	void nhapdl();
	void xuatdl();

	double getGpa(); // tra ve gpa de dung ngoai class
	void setGpa(double gpa);

	void tangdem();
	int getdem() {
		return dem;
	}

	friend void inthongtin(SinhVien a);
	friend void chinhten(SinhVien& a); /* muon thay
	doi ten sau khi chinh sua thi phai truyen tham
	chieu &a or & cx dc nha */
};

class GiaoVien {
private:
	string khoa;
public:
	void update(SinhVien &x) {
		x.gpa = 3.80;
	}
};

void chinhten(SinhVien& a) {
	// file ở week 9 devC
}

void inthongtin(SinhVien a) {
	cout << a.id << " " << a.ten << endl;
}

int SinhVien::dem = 0;

void SinhVien::tangdem() {
	++dem;
}

SinhVien::SinhVien() {
	// cout << "Ham khoi tao ko tham so duoc goi \n";
}

SinhVien::SinhVien(string id, string t, string n, double gpa) {
	cout << "Ham khoi tao co tham so duoc goi \n";
	this->id = id; 
	// neu id = id se bi nham, nen dung this no moi hieu
	ten = t;
	// hoac dat ten moi de tranh bi nham, co 2 cach nha
	ns = n;
	this->gpa = gpa;
}

void SinhVien::dihoc() {
	cout << "Di hoc! \n";
}

SinhVien::~SinhVien() {
	// cout << "Doi tuong duoc huy tai day! \n";
}

void hamHuy() {
	SinhVien x;
}

void SinhVien::nhapdl() {
	cout << "Nhap id: ";	cin >> id;
	cin.ignore();
	cout << "Nhap ten: ";	getline(cin, ten);
	cout << "Nhap ns: ";	getline(cin, ns);
	cout << "Nhap diem: ";	cin >> gpa;
}

void SinhVien::xuatdl() {
	cout << id << " " << ten << " " << ns << " ";
	cout << fixed << setprecision(2) << gpa << endl;
}

double SinhVien::getGpa() {
	return gpa; //return this->gpa; deu dc nha
}

bool sapxep(SinhVien a, SinhVien b) {
	/* muon dung gpa ngoai class thi phai xd ham 
	tra ve gpa de dung: getGpa() */
	return a.getGpa() < b.getGpa();
}

void SinhVien::setGpa(double gpa) {
	this->gpa = gpa;
}

/*==================

- class
	+ thuoc tinh: int, string, float, ... (private)
	+ phuong thuc: void class(), ... (public)
	+ dung protected thay private neu muon KE THUA

- ham tao: cung ten voi class
	+ ko tham so: SinhVien()
	+ co tham so: SinhVien(string id, ...) 

- con tro this->: dung cx dc, ko dung cx dc nha 
	this->id: la id trong class
	id: la id trong ham tao string id
	no se pb 2 cai do va ko bi nham nha

- ham huy: ~tenClass (~SinhVien)
	
- set, get:
	+ get: lay ra gtri de dung ngoai ham;
	+ set: cap nhat gtri new

- bien static: chung cho ca class, neu minh khai bao
x, sau do tang bien dem x len dem = 2 thi khi hien 
thi bien dem no se lay 2 cua x do static dung chung
cho ca class

- ham ban: muon tao 1 ham ko thuoc lop sinhvien nhung van
truy cap vao private dc thi phai dung ham ban

- lop ban: 

==================*/

int main() {
	/* === Ham tao ===
	SinhVien x("123", "Nguyen Van A", "23/12/2003", 3.1);
	SinhVien y;
	x.dihoc();
	x.xinchao();
	=============== */

	/* === Ham huy ===
	cout << "Xin chao! \n";
	if (1) {
		SinhVien x;  // text in
	} // het ham se bi huy
	cout << "Hello! \n";
	hamHuy(); // het ham se bi huy
	=============== */

	/* == Nhap, xuat 1 sv ==
	SinhVien x;
	x.nhapdl();
	x.xuatdl();
	======================*/

	/* == Nhap, xuat many sv ==
	int n; cin >> n;
	SinhVien a[10];
	for (int i = 0; i < n; i++) {
		a[i].nhapdl();
	}
	sort(a, a + n, sapxep);
	for (int i = 0; i < n; i++) {
		a[i].xuatdl();
	}
	=========================*/

	/* === Get, set ===
	SinhVien x;
	x.setGpa(3.5);
	=================*/
	
	/* ================
	SinhVien x;
	x.nhapdl();
	SinhVien y = x; // no se gan tung thuoc tinh cua
	y.xuatdl();				// x cho y
	=================*/

	/* === Static ===
	SinhVien x;
	x.tangdem(); // dem = 1
	x.tangdem(); // dem = 2
	SinhVien y;
	cout << y.getdem() << endl; // dem = 2
	y.tangdem();
	SinhVien z;
	cout << z.getdem() << " " << y.getdem() << " ";
	cout << x.getdem() << endl; // 3 3 3
	===============*/

	/* === Friend ===
	SinhVien x;
	x.nhapdl();
	inthongtin(x);
	chinhten(x);
	x.xuatdl();
	===============*/

	/* == Friend class ==
	SinhVien x;
	x.nhapdl();
	GiaoVien y;
	y.update(x);
	x.xuatdl();
	================== */
	return 0;
}