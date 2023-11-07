// Class, hàm tạo
/* Một lớp có cùng chung mục đích (để học chẳng hạn)
cùng chung đặc điểm */
#include<iostream>
#include<string>

using namespace std;

class SinhVien {
private: // mức truy cập: chỉ mình tôi (kiểu kiểu vậy)
	int maSV;
	string tenSV;
	int tuoi;
public: 
	SinhVien() { // hàm ko tham số, tên trùng với class
		maSV = 715105131;
		tenSV = "Nguyen Van A";
		tuoi = 19;
	}
	void noiChuyen() {
		cout << "Noi linh tinh" << endl;
	}
	void choiGame() {
		cout << "Choi game" << endl;
	}
	void hocBai() {
		cout << "Doc sach" << endl;
	}
	void info() {
		cout << tenSV << endl << maSV << endl << tuoi;
	}
};

int main7() {
	SinhVien a;
	//cout << a.ten; // lỗi vì là private
	a.hocBai();
	a.choiGame();
	a.info();
	return 0;
}