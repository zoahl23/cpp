#include<iostream>
#define size 1000

using namespace std;

int main7() {
	int n;
	cout << "Nhap so loai nam: ";
	cin >> n;

	int a[size], b[size];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

// In dong 1
	for (int i = 0; i < n; i++) {
		if (2 * b[i] <= a[i]) {
			cout << "(" << a[i] << ", " << b[i] << ") ";
		}
	}
	cout << endl;

// In dong 2
	int max = b[0];
	for (int i = 0; i < n; i++) {
		if (b[i] >= max) {
			max = b[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (b[i] == max) {
			cout << "(" << a[i] << ", " << b[i] << ") ";
		}
	}
	cout << endl;

// In dong 3
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				int t = a[i];
				a[i] = a[j];
				a[j] = t;

				int x = b[i];
				b[i] = b[j];
				b[j] = x;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << "(" << a[i] << ", " << b[i] << ") ";
	}

	return 0;
}