#include<iostream>
using namespace std;

/*
 - Câu lệnh switch nó tương đương với if else
 - Tùy đề bài, bài nào đề dài mà nó na ná nhau thì
   dùng switch

   break là ngừng ko thực thi các dòng bên dưới
   default giống lệnh else, ko dùng cx được, tùy đề
*/

int main4() {
	int b=5;
	switch (b) {

	// Nhiều case cùng làm 1 công việc
	case 1:
	case 2:
	case 3: cout << " xyz \n"; break;

	// Mỗi case làm 1 công việc riêng
	case 4: cout << "p \n"; break;
	case 9: cout << "w \n"; break;
	default: cout << " ban nhap sai rùi \n";
	}
	return 0;
}