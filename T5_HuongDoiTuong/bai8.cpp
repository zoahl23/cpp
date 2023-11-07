// Đơn kế thừa và Extension
#include<iostream>
#include<string>

using namespace std;

/* Trình tự sẽ là:
	private > protected > public 
giống kiểu: chỉ mình tôi, bạn bè, mọi người

- nếu class kế thừa ko ghi gì sẽ mặc định là private
- nếu ghi SinhVien : private Nguoi thì sẽ là private
- nếu thay thành public thì sẽ là protected tại vì 
nó lấy cái nào bảo mật cao hơn */

class Person {
protected:     // để vậy mới kế thừa đc
	string ten;
	int tuoi;
public:
	void noiChuyen() {
		cout << "Noi Chuyen" << endl;
	}
};

class HocSinh : public Person {
	int maSV;
	/* tại sao ko ghi tên tuổi ? Tại vì nó kế thừa nên
	chắc chắn sẽ có
		string ten;
		int tuoi;
	nên ko cần ghi, chỉ thêm cái nào thì ghi cái đó
	*/
public:
	HocSinh() {
		ten = "Nguyen Van C";
		tuoi = 19;
		maSV = 715105131;
	}
	void xuat() {
		cout << ten << endl << tuoi << endl << maSV;
		cout << endl;
	}
};

int main11() {
	HocSinh a;
	a.xuat();
	a.noiChuyen();
	// Hoặc dùng con trỏ
	Person* g = new HocSinh;
	// HocSinh* g = new Person    Errol
	g->noiChuyen();
	((HocSinh*)g)->xuat();
	return 0;
}

/* giải thích public dòng 26, nếu để mặc định (private)
thì khi gọi hàm void ở class Person thì hàm void ban đầu
sẽ là public nhưng khi chuyển qua class HocSinh nó thấy
ghi private thì nó sẽ theo cái bảo mật hơn là private và
sẽ ko in ra đc hàm void noichuyen()
- vậy nên phải để public để khi nó so sánh giữa public và
public sẽ chọn public, còn nếu public và private nó sẽ 
chọn cái bảo mật hơn là private
- còn protected và public sẽ chọn protected nha

- phải để protected hoặc public thì mới kế thừa đc
private sẽ ko thể kế thừa đc
*/