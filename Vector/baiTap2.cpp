#include<iostream>
#define size 100

using namespace std;

int main() {
	int n;
	int a[size];
	
// Yeu cau 1
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

// Yeu cau 2
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

// Yeu cau 3
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= 0) {
			s += a[i];
		}
	}
	cout << s << endl;

// Yeu cau 4
	int min = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < min) {
			a[i] = min;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] = min) {
			cout << i << endl;
			break;
		}
	}

// Yeu cau 5
	
	return 0;
}