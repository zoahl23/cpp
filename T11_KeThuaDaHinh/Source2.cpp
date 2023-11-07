#include<iostream>

using namespace std;

class A {
public:
	A() {
		cout << "Ham tao cua A \n";
	}
	~A() {
		cout << "Ham huy cua A \n";
	}
	void xinchao() {
		cout << "Xin chao A \n";
	}
};

class B:public A {
public:
	B() {
		cout << "Ham tao cua B \n";
	}
	~B() {
		cout << "Ham huy cua B \n";
	}
	void xinchao() {
		cout << "Xin chao B \n";
	}
};

class C:public B {
public:
	C() {
		cout << "Ham tao cua C \n";
	}
	~C() {
		cout << "Ham huy cua C \n";
	}
	void xinchao() {
		cout << "Xin chao C \n";
	}
};

/*

- Ham tao: no se tao tu class cha -> con
- Ham huy: nguoc lai, huy tu class con -> cha

IF: DA KE THUA
class A: xinchao()
class B: xinchao()
class C : public A, public B 

C x;
x.xinchao(); do C ko co ham do no se ko biet chon A hay B

luc do minh se dung x.B::xinchao(); de chi cho no


OR:
Class A
Class B: public A
Class C: public A
Class D: public A
nhieu lop co the ke thua tu 1 lop


*/

int main() {
	C x;

	// Ham tao cua A
	// Ham tao cua B
	// Ham tao cua C
	// Ham huy cua C
	// Ham huy cua B
	// Ham huy cua A

	x.xinchao();
	/* === cac buoc chay cau lenh tren ==
	
	- ktra class C co ham do ko
		+ T: Xin chao C
		+ F: ktra class cha cua C la B xem co ham do ko
			+ T: Xin chao B
			+ F: ktra class cha cua B xem co ham do ko
				+ T: Xin chao A
				+ F: errol - ham chua dc dinh nghia

	================================= */

	return 0;
}