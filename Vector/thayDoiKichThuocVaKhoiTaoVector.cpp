// Thay doi kick thuoc va khoi tao Vector
#include<iostream>
#include<vector>
using namespace std;

// dung v[i] hay v.at(i) đều in ra kq giong nhau

int main1() {
	vector<int> v(3);
	v.resize(5, 1);
	cout << "Vector sau khi dung v.resize(5, 1): ";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
		// cout << v.at(i) << " ";
	}
	cout << endl;
	return 0;
}