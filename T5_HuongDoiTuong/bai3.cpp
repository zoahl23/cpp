// Cấp phát động và làm việc với mảng bằng con trỏ
#include<iostream>

using namespace std;

int main4() {
	int n;
	cout << "Nhap n: " << endl;
	cin >> n;

	int* p;
	p = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap ptu thu " << i << ": " << endl;
		cin >> *(p + i);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (*(p + i) < *(p + j)) {
				swap(*(p + j), *(p + i)); // đổi chỗ
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << *(p + i) << "\t";
	}

	return 0;
}