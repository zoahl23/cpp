#include<iostream>
#include<vector>
using namespace std;

/*
	Sao chep du lieu tu 1 Vector sang 1 Vector khac
*/

int main2() {
	vector<int> a = { 1, 2, 3 };
	vector<int> b;
	b = a;
	for (int i = 0; i < b.size(); i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	return 0;
}