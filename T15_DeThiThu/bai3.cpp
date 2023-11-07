#include<bits/stdc++.h>

using namespace std;

class Author {
	private:
		string name, mail;
	public:
		Author();
		Author(string name, string mail);
		string getEmail() {
			return mail;
		}
		string getName() {
			return name;
		}
		void setEmail(string mail) {
			this->mail = mail;
		}
		void setName(string name) {
			this->name = name;
		}
		virtual void nhapdl();
		virtual void xuatdl();
};

class Book : public Author {
	private:
		string tens;
		float gias;
	public:
		Book();
		Book(string tens, float gias);
		string getTenS() {
			return tens;
		}
		float getGiaS() {
			return gias;
		}
		string getAuthorName() {
			return getName();
		}
		void setTenS(string tens) {
			this->tens = tens;
		}
		void setGiaS(float gias) {
			this->gias = gias;
		}
		void nhapdl();
		void xuatdl();
};

Author::Author() {
	name = mail = "";
}

Author::Author(string name, string mail) {
	this->name = name;
	this->mail = mail;
}

void Author::nhapdl(){
	cin.ignore();
	cout << "Nhap name: ";
	getline(cin, name);
	cout << "Nhap email: ";
	getline(cin, mail);
}

void Author::xuatdl(){
	cout << "Name: " << name << endl;
	cout << "Email: " << mail << endl;
}

Book::Book() {
	tens = "";
	gias = 0;
}

Book::Book(string tens, float gias) {
	this->tens = tens;
	this->gias = gias;
}

void Book::nhapdl(){
	Author::nhapdl();
	cout << "Nhap ten sach: ";
	getline(cin, tens);
	cout << "Nhap gia sach: ";
	cin >> gias;
}

void Book::xuatdl(){
	Author::xuatdl();
	cout << "Ten sach: " << tens << endl;
	cout << "Gia sach: " << gias << endl;
}

int main(){
	int n; cin >> n;
	Book a[n];
	for (int i = 0; i < n; i++) {
		a[i].nhapdl(); // cua book do ham cua author la ham ao
	}
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].getGiaS() > max) {
			max = a[i].getGiaS();
		}
	}
	cout << "Thong tin cuon sach co gia cao nhat la: " << endl;
	for (int i = 0; i < n; i++) {
		if (a[i].getGiaS() == max){
			a[i].xuatdl();
		}
	}
	bool check = true;
	string nameTK;
	cin.ignore();
	cout << "Nhap ten tac gia can tim: ";
	getline(cin, nameTK);
	for (int i = 0; i < n; i++)
	{
		if (strcmp(a[i].getName().data(), nameTK.data()) == 0)
		{
			a[i].xuatdl();
			check = false;
		}
	}
	if (check)
	{
		cout << "Khong co cuon sach nao!";
	}
	return 0;
}
