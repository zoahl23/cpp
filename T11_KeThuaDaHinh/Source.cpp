#include<iostream>
#include<string>

using namespace std;

class Person {
private:
	string name;
	string address;
public:
	Person(string name, string address) {
		this->name = name;
		this->address = address;
	}
	string getName() {
		return name;
	}
	string getAddress() {
		return address;
	}
	void setName(string name) {
		this->name = name;
	}
	void setAddress(string address) {
		this->address = address;
	}
	void in() {
		cout << name << " " << address << " ";
	}
	void nhap() {
		getline(cin, name);
		getline(cin, address);
	}
};

class Student : public Person {
	// class student ke thua tu class person
private:
	float gpa;
public:
	Student(string name, string address, float gpa) : Person(name, address) {
		this->gpa = gpa;
	}
	float getGpa() {
		return gpa;
	}
	void setGpa(float gpa) {
		this->gpa = gpa;
	}
	// ghi de
	void in() {
		/*cout << name; se ko dc do name la private 
		nen ko the truy cap ngoai class Person dc, có
		2 cach de truy cap la, 1 là cout << getName vua
		xd o tren or 2 la doi private cua class person
		thanh protected */
		cout << getName() << endl;
		//cout << name << endl;
		// cach 3
		Person::in();
		cout << " ne!";
	}
	// ghi de
	void nhap() {
		Person::nhap();
		cin >> gpa;
	}
};

/* ================

class cha
class con

================ */

int main2() {
	//Student s;
	/*s.setName("Nguyen Van A");
	s.setAddress("Hai Duong");
	s.setGpa(2.8);
	cout << s.getName() << " " << s.getAddress();
	cout << " " << s.getGpa() << endl;
	s.in();*/

	//s.nhap();// neu class con ko co ham nhap, no se
	//s.in(); // goi ham nhap() o class cha

	//s.Person::nhap(); // goi ham nhap() cua class Person

	Student s("Nguyen Van A", "Hai Phong", 3.7);
	s.in();
	return 0;
}