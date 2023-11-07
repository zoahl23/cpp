// Toan tu xac dinh pham vi
#include<iostream>
using namespace std;

int x = 5;
int main2() {
	int x = 16;
	cout << x << endl;     // x = 16
	cout << ::x << endl;   // x = 5
	return 0;
}