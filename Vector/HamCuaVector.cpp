#include <iostream>
using namespace std;


// Modifiers
/*
int main3(){
	vector<int> vec;

// Gan gtri moi cho Vector bang cach thay the gtri cu 
	vec.assign(7, 12);
	for (int i = 0; i < 7; i++)
		cout << vec[i] << " ";
	// Kq: 12 12 12 12 12 12 12


// Chen them gtri vao cuoi Vector
	vec.push_back(24);
	int s = vec.size();
	cout << vec[s - 1];
	// Kq: 24
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	// Kq: 12 12 12 12 12 12 12 24


// Xoa ptu cuoi cung cua Vector
	vec.pop_back();
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	// Kq: 12 12 12 12 12 12 12


// Chen ptu o vi tri iterator
	vec.insert(vec.begin(), 10);
	// vec.begin(): vi tri dau
	cout << vec[0];
	// Kq: 10


// Xoa ptu o vi tri iterator
	vec.erase(vec.begin());
	cout << vec[0];
	// Kq: 12


// Chen ptu o vi tri iterator (giong insert)
	vec.emplace(vec.begin(), 5);
	cout << vec[0];
	// Kq: 5


// Chen ptu vao cuoi Vector ( giong push_back )
	vec.emplace_back(20);
	s = vec.size();
	cout << vec[s - 1];
	// Kq: 20


// Xoa toan bo
	vec.clear();
	cout << vec.size();
	// Kq: 0


// Hoán đổi nội dung của 2 Vector
	vector<int> obj1, obj2;
	obj1.push_back(2);
	obj1.push_back(4);
	obj2.push_back(6);
	obj2.push_back(8);
	for (int i = 0; i < obj1.size(); i++)
		cout << obj1[i] << " ";
	for (int i = 0; i < obj2.size(); i++)
		cout << obj2[i] << " ";
	// Kq:  2 4
	//      6 8

	// Hoán đổi
	obj1.swap(obj2);
	for (int i = 0; i < obj1.size(); i++)
		cout << obj1[i] << " ";
	for (int i = 0; i < obj2.size(); i++)
		cout << obj2[i] << " ";
	// Kq:  6 8
	//      2 4
	return 0;
}*/

// Iterator
/*
int main4() {
	vector<int> g1;
	for (int i = 1; i <= 5; i++)
		g1.push_back(i);
	// Kq: 1 2 3 4 5


//	begin(): ptu đầu tiên trong vector
//	end():   ptu cuoi cung trong vector

	cout << "Output of begin and end: ";
	for (auto i = g1.begin(); i != g1.end(); ++i)
		cout << *i << " ";
	// Kq: 1 2 3 4 5


//	rbegin():	ptu cuoi cung trong vector, di chuyen tu
//			    ptu cuoi cung đến ptu dau tien
//				ngược so với begin
//	rend():		Tương tự, ngược so với end

	cout << "\nOutput of rbegin and rend: ";
	for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
		cout << *ir << " ";
	// Kq: 5 4 3 2 1

	return 0;
}*/

// Capacity
/*
int main5() {
	vector<int> vec1;
	for (int i = 1; i <= 10; i++)
		vec1.push_back(i);

// So ptu đang đc sdung cua Vector
	cout << vec1.size();		// Kq: 10

// So ptu đc cấp phat cho Vecto nằm trong bo nhớ
	cout << vec1.capacity();	// Kq: 16

// So ptu tối da mà Vector có the chứa
	cout << vec1.max_size();	// kq: 1073741823

// Kiem tra vung chứa có rỗng hay kh, True False
	if (vec1.empty() == false)	
		cout << "nVector is not empty";
	else
		cout << "nVector is empty";


// Thay doi kích thuoc vùng chứa

//	resize(n):
// - neu kich thuoc hien tai > n, thì cac ptu phía sau sẽ
//   bị xóa bỏ.
// - neu kich thuoc hien tai < n, thì cac ptu bổ sung se
//   dc chen vao phia sau. resize(n, value);
//   Ví du:
//		vector<int> v(3, 0);	Kq: 0 0 0
//		resize(5, 1);			Kq: 0 0 0 1 1


	vec1.resize(4);
	cout << vec1.size();		// Kq: 5
	
	
	return 0;
}*/

// Element access
/*
int main6() {
	vector<int> g1;
	for (int i = 1; i <= 10; i++)
		g1.push_back(i * 1);

// v[i] tuong tu nhu v.at[i]
	cout << g1[2];						// Kq: 3
	cout << g1.at(4);					// Kq: 5

// Lấy ra ptu đầu tien cua vector
	cout << g1.front();					// Kq: 1

// Lay ra ptu cuoi cung cua vector
	cout << g1.back();					// Kq: 10

	return 0;
}*/
